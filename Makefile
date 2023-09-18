# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 00:49:12 by nelhassa          #+#    #+#              #
#    Updated: 2023/09/18 22:45:45 by nelhassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
	ft_isascii.c\
	ft_memset.c\
	ft_isalnum.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_memchr.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_memcpy.c\
	ft_memcmp.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strlcat.c\
	ft_memmove.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_itoa.c\
	ft_split.c\
	ft_strmapi.c\
	ft_striteri.c

BonusSRC =  ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstiter.c\
			ft_lstclear.c\
			ft_lstmap.c



CFLAGS = -Wall -Wextra -Werror

CC = cc

BonusOBJ = $(BonusSRC:.c=.o)

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus : $(BonusOBJ)
	ar -rcs $(NAME) $(BonusOBJ)

all: $(NAME)

clean:
	rm -f $(OBJ) $(BonusOBJ)

fclean: clean
	rm -f $(NAME) $(BonusOBJ)

re: fclean all

.PHONY: all clean fclean re