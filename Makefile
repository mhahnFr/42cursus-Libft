# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 09:57:08 by mhahn             #+#    #+#              #
#    Updated: 2021/06/26 17:25:55 by mhahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_calloc.c \
ft_substr.c \
ft_strtrim.c \
ft_strdup.c \
ft_itoa.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_strjoin.c \
ft_strmapi.c \
ft_split.c

BONBON = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c


all: $(NAME) bonus

$(NAME):
	cc -Wall -Werror -Wextra -c $(SRC)
	ar -rs $(NAME) *.o

clean:
	/bin/rm -f *.o
	/bin/rm -f *~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

bonus:
	cc -Wall -Werror -Wextra -c $(BONBON)
	ar -rs $(NAME) *.o
