# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 19:03:55 by mkrubini          #+#    #+#              #
#    Updated: 2020/01/31 20:04:05 by mkrubini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# fazer os comandos $(name), all, clean, fclean, re
# declara a variável no topo com letras maiúsculas e para usar pegue a sintaxe:
# $(nome da variável)

NAME = libft.a

SCRIPT = ft_memset.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_memmove.c

SCRIPTOBJ = ft_memset.o ft_bzero.o ft_isdigit.o ft_memcpy.o ft_memmove.o

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
