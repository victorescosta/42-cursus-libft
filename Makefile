# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: veugenio < veugenio@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 00:38:38 by veugenio          #+#    #+#              #
#    Updated: 2021/12/11 00:12:48 by veugenio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c  ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlen.c ft_memchr.c ft_strchr.c \
		ft_strrchr.c  ft_strnstr.c ft_strncmp.c ft_memset.c ft_memcmp.c \
		ft_memcpy.c ft_bzero.c ft_memmove.c ft_strlcat.c ft_strlcpy.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c  ft_putnbr_fd.c \
		ft_itoa.c ft_striteri.c ft_strtrim.c ft_strmapi.c ft_split.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c

OBJS =  $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

NAME	=	libft.a
CC		=	clang
RM		=	rm -f
AR		=	ar
ARFLAGS	=	rcs
CFLAGS	=	-Wall	\
			-Wextra \
			-Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
				$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

bonus:	$(NAME) $(OBJS_BONUS)
			$(AR) $(ARFLAGS) $(NAME) $(OBJS_BONUS)

.PHONY: all clean fclean re bonus
