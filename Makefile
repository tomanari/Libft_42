# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtomanar <mtomanar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 14:36:59 by mtomanar          #+#    #+#              #
#    Updated: 2026/05/28 19:28:50 by mtomanar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome do compilador
CC = cc

# Flags de compilação
CFLAGS = -Wall -Wextra -Werror

# Nome do arquivo executável final
INCLUDES = -I.
BIN = bin
NAME = libft.a
HEADER = libft.h

# Arquivos fonte
SRCS = 	src/basic/ft_atoi.c \
		src/basic/ft_bzero.c \
		src/basic/ft_calloc.c \
		src/basic/ft_isalnum.c \
		src/basic/ft_isalpha.c \
		src/basic/ft_isascii.c \
		src/basic/ft_isdigit.c \
		src/basic/ft_isprint.c \
		src/basic/ft_memcpy.c \
		src/basic/ft_memmove.c \
		src/basic/ft_memset.c \
		src/basic/ft_memchr.c \
		src/basic/ft_memcmp.c \
		src/basic/ft_strchr.c \
		src/basic/ft_strlcat.c \
		src/basic/ft_strlcpy.c \
		src/basic/ft_strlen.c \
		src/basic/ft_strncmp.c \
		src/basic/ft_strnstr.c \
		src/basic/ft_strrchr.c \
		src/basic/ft_strdup.c \
		src/basic/ft_toupper.c \
		src/basic/ft_tolower.c 


# Arquivos objeto gerados na compilação
OBJS = $(patsubst %.c,$(BIN)/%.o,$(SRCS))

# Regra principal (executada ao digitar apenas 'make')
all: $(NAME)

# Como gerar o executável a partir dos objetos
$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS)

# Como gerar arquivos objeto a partir dos fontes
$(BIN)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@



# Regra para limpar os arquivos gerados (make clean)
clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:
	fclean all

.PHONY: all clean fclean re