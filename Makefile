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
SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_strtrim.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c


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
	rm -rf $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME)

.PHONY: all clean fclean re bonus