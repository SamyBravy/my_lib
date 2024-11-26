# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdell-er <sdell-er@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 15:44:24 by sdell-er          #+#    #+#              #
#    Updated: 2024/08/11 11:44:40 by sdell-er         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmy_lib.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ./Libft/Lists/ft_lstadd_back.c \
		./Libft/Lists/ft_lstadd_back_int.c \
		./Libft/Lists/ft_lstadd_front.c \
		./Libft/Lists/ft_lstclear.c \
		./Libft/Lists/ft_lstclone.c \
		./Libft/Lists/ft_lstdelone.c \
		./Libft/Lists/ft_lstiter.c \
		./Libft/Lists/ft_lstlast.c \
		./Libft/Lists/ft_lstmap.c \
		./Libft/Lists/ft_lstnew.c \
		./Libft/Lists/ft_lstsize.c \
		./Libft/Lists/ft_lst_to_matrix.c \
		./Libft/Lists/ft_matrix_to_lst.c \
		./Libft/Lists/ft_new_intlst.c \
		./Libft/Memory/ft_bzero.c \
		./Libft/Memory/ft_calloc.c \
		./Libft/Memory/ft_free_mat.c \
		./Libft/Memory/ft_memchr.c \
		./Libft/Memory/ft_memcmp.c \
		./Libft/Memory/ft_memcpy.c \
		./Libft/Memory/ft_memmove.c \
		./Libft/Memory/ft_memset.c \
		./Libft/Numbers/ft_abs.c \
		./Libft/Numbers/ft_atof.c \
		./Libft/Numbers/ft_atoi.c \
		./Libft/Numbers/ft_ftoa.c \
		./Libft/Numbers/ft_itoa.c \
		./Libft/Numbers/ft_nbrlen.c \
		./Libft/Numbers/ft_pow.c \
		./Libft/Put_fd/ft_putchar_fd.c \
		./Libft/Put_fd/ft_putendl_fd.c \
		./Libft/Put_fd/ft_putnbr_fd.c \
		./Libft/Put_fd/ft_putstr_fd.c \
		./Libft/Strings/ft_isalnum.c \
		./Libft/Strings/ft_isalpha.c \
		./Libft/Strings/ft_isascii.c \
		./Libft/Strings/ft_isdigit.c \
		./Libft/Strings/ft_isprint.c \
		./Libft/Strings/ft_split.c \
		./Libft/Strings/ft_strchr.c \
		./Libft/Strings/ft_strcmp.c \
		./Libft/Strings/ft_strdup.c \
		./Libft/Strings/ft_striteri.c \
		./Libft/Strings/ft_strjoin3.c \
		./Libft/Strings/ft_strjoin.c \
		./Libft/Strings/ft_strlcat.c \
		./Libft/Strings/ft_strlcpy.c \
		./Libft/Strings/ft_strlen.c \
		./Libft/Strings/ft_strmapi.c \
		./Libft/Strings/ft_strncmp.c \
		./Libft/Strings/ft_strnstr.c \
		./Libft/Strings/ft_strrchr.c \
		./Libft/Strings/ft_strtrim.c \
		./Libft/Strings/ft_substr.c \
		./Libft/Strings/ft_tolower.c \
		./Libft/Strings/ft_toupper.c \
		./ft_printf/ft_printf.c \
		./ft_printf/ft_putchar.c \
		./ft_printf/ft_putstr.c \
		./ft_printf/ft_putnbr.c \
		./ft_printf/ft_putexa.c \
		./get_next_line/get_next_line_bonus.c \
		./get_next_line/get_next_line_utils_bonus.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "\e[0;93m[$(NAME)] compiled!\e[0m"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\e[0;91m[$(NAME)] cleaned!\e[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\e[0;91m[$(NAME)] deleted!\e[0m"

re: fclean all
