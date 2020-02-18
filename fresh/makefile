# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 19:03:55 by mkrubini          #+#    #+#              #
#    Updated: 2020/02/03 21:35:34 by mkrubini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# fazer os comandos $(name), all, clean, fclean, re
# declara a variável no topo com letras maiúsculas e para usar pegue a sintaxe:
# $(nome da variável)

NAME = libft.a

SCRIPT = ft_memset.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_memccpy.c ft_calloc.c ft_strlcat.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

SCRIPTOBJ = ft_memset.o ft_bzero.o ft_isdigit.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_tolower.o ft_toupper.o ft_isprint.o ft_isascii.o ft_isalnum.o ft_isalpha.o ft_atoi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strchr.o ft_memccpy.o ft_calloc.o ft_strlcat.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):	$(SCRIPT) libft.h
	gcc $(FLAGS) -I./ -c $(SCRIPT)
	ar rc $(NAME) $(SCRIPTOBJ)
	ranlib $(NAME)

clean:
	rm -f $(SCRIPTOBJ)

fclean:
	rm -f $(SCRIPTOBJ) $(NAME)

re:	fclean all

norm:	norminette *.[ch]
