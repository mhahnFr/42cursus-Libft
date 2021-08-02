# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 09:57:08 by mhahn             #+#    #+#              #
#    Updated: 2021/08/02 22:04:36 by mhahn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# The name of the binary to create.
NAME = libft.a

# The source files.
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

# The source files for the bonus part.
BONBON = ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c


# Compiles the library including the bonus part.
all: $(NAME) bonus

# Compiles the mandatory part of the library.
$(NAME):
	cc -Wall -Werror -Wextra -c $(SRC)
	ar -rs $(NAME) *.o

# Removes all temporary files.
clean:
	/bin/rm -f *.o
	/bin/rm -f *~

# Removes all files created by this makefile.
fclean: clean
	/bin/rm -f $(NAME)

# Removes all files and recompiles the library.
re: fclean all

# Creates a dynamic library.
so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

# Compiles and adds the bonus part to the library.
bonus:
	cc -Wall -Werror -Wextra -c $(BONBON)
	ar -rs $(NAME) *.o
