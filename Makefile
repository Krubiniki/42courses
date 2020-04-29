# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 19:03:55 by mkrubini          #+#    #+#              #
#    Updated: 2020/04/29 19:38:21 by mkrubini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# comandos: make, all, clean, fclean, re, norm
# declara a variável no topo com letras maiúsculas e para usar pegue a sintaxe:
# $(nome da variável)

NAME = libft.a

SCRIPT = ft_memset.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c ft_isalpha.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_memccpy.c ft_calloc.c ft_strlcat.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SCRIPTOBJ = ft_memset.o ft_bzero.o ft_isdigit.o ft_memcpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlen.o ft_strlcpy.o ft_tolower.o ft_toupper.o ft_isprint.o ft_isascii.o ft_isalnum.o ft_isalpha.o ft_atoi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strchr.o ft_memccpy.o ft_calloc.o ft_strlcat.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_strmapi.o ft_itoa.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

SCRIPTBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SCRIPTBONUSOBJ = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

FLAGS = -Wall -Wextra -Werror

all:$(NAME)

$(NAME):	$(SCRIPT) libft.h
	gcc $(FLAGS) -I./ -c $(SCRIPT)
	ar rc $(NAME) $(SCRIPTOBJ)
	ranlib $(NAME)

clean:
	rm -f $(SCRIPTOBJ) $(SCRIPTBONUSOBJ)

fclean:
	rm -f $(SCRIPTOBJ) $(SCRIPTBONUSOBJ) $(NAME)

re:	fclean all

bonus:	       $(SCRIPTBONUS) libft.h
	gcc $(FLAGS) -I./ -c $(SCRIPTBONUS)
	ar rc $(NAME) $(SCRIPTBONUSOBJ)
	ranlib $(NAME)

norm:	norminette *.[ch]

.PHONY: clean fclean all re
