/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhahn <mhahn@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:19:28 by mhahn             #+#    #+#             */
/*   Updated: 2021/08/02 23:13:22 by mhahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <stddef.h>

/*
 * A structure for creating a simple linked list.
 * In the content one can store a pointer to any 
 * type of data, as well as there is a pointer to
 * the next node of the list.
 */
typedef struct s_list
{
	/* A pointer to the content. */
	void			*content;

	/* A pointer to the next node in the list. */
	struct s_list	*next;
}	t_list;

/*
 * Calculates the length of the given string. It returns
 * the count of characters before the first null terminator
 * occurs. Counting starts at zero.
 */
size_t	ft_strlen(const char *s);

/*
 * Sets the given length amount of bytes in the given buffer
 * to the given value. Returns the given buffer.
 */
void	*ft_memset(void *b, int c, size_t len);

/* Sets the given amount of bytes in the given buffer to zero. */
void	ft_bzero(void *s, size_t n);

/*
 * Copies the given amount of bytes from the given source to
 * the given destination. It does not handle possible memory
 * overlays. Use ft_memmove if an overlay of the memory could
 * be possible. Returns the given destination.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
 * Copies at most the given amount of bytes from the given source
 * to the given destination. Copying stops when the given character
 * is found or the given length amount of bytes has been copied.
 * Returns an pointer to the position after the given delimiter in
 * the given destination. If the delimiter is contained in the given
 * source, returns null.
 */
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*
 * Tests wether the given character is a digit. Returns 1, if it is
 * a digit, or 0, if it is not.
 */
int		ft_isdigit(int c);

/*
 * Tests wether the given character takes part of the ASCII table. Returns
 * 1, if it is part of, or 0, if it is not.
 */
int		ft_isascii(int c);

/*
 * Converts the given character to its lowercase representation, if it
 * has one. Returns the character, converted if possible.
 */
int		ft_tolower(int c);

/*
 * Converts the given character to its uppercase representation, if it
 * has one. Returns the character, converted if possible.
 */
int		ft_toupper(int c);

/*
 * Tests wether the given character is printable. Returns 1, if it is
 * printable, or 0, if it is not.
 */
int		ft_isprint(int c);

/*
 * Tests wether the given character is a letter. Returns 1,
 * if the given character is a letter, or 0 if it is not.
 */
int		ft_isalpha(int c);

/*
 * Tests wether the given character is a letter or a digit. Returns 1,
 * if the given character is alphanumeric, or 0 if it is not.
 */
int		ft_isalnum(int c);

/*
 * Searches for the second given string in the first given string. Searches at
 * for at most the given length amount of characters. A pointer to the first
 * occurance of the first character of the second string inside the first one
 * is returned, if the string is not found, null is returned.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*
 * Compares the given strings. Returns either 0, if the strings are equal, or
 * the difference of the first character differing. Comparasion is done up to
 * the amount of the given length.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/*
 * Copies the given length amount of characters from the given source
 * to the given destination. Returns the length of the given source,
 * or 0, if either string is null
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*
 * Concatinates the to given strings. Copies the given source to the end of the
 * given destination. If enough space is left in the given destination, the
 * string will be null-terminated. The actual size of the destination should
 * also be given. Returns the size of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
 * Returns a pointer to the first occurance of the given character in the given
 * string. If the given character is not found, null is returned.
 */
char	*ft_strchr(const char *s, int c);

/*
 * Returns a pointer to the last occurance of the given character in the given
 * string. If the given character is not found, null is returned.
 */
char	*ft_strrchr(const char *s, int c);

/*
 * Iterates through the given buffer at most the given length amount of bytes.
 * Compares the content as unsigned characters. Returns a pointer to the
 * occurance of the given character, or null, if the given buffer does not
 * contain the given character within the given length.
 */
void	*ft_memchr(const void *s, int c, size_t n);

/*
 * Iterates through the given buffers at most the given length amount,
 * comparing their content as unsigned characters. Returns 0, if the buffers
 * are equal, or the difference between the first occurance of not equal bytes.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*
 * Copies the given source to the given destination. If the strings overlap,
 * the copying is done in a nondestructive manner. The given length amount of
 * characters is copied.
 */
void	*ft_memmove(void *dst, const void *src, size_t len);

/*
 * Converts the given string to an integer representation. Returns
 * the converted integer.
 */
int		ft_atoi(const char *str);

/*
 * Allocates enough space for the given count and size of objects.
 * Sets the allocated memory to zero. Returns the allocated, zeroed
 * buffer, or null if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);

/*
 * Duplicates the given string. Returns a newly allocated string, containing
 * a copy of the content of the string given.
 */
char	*ft_strdup(const char *s1);

/*
 * Creates a new string consisting of a copy of the given space inside of the
 * given string. The copy starts at the given index and goes up to either the
 * amount of the given length or the end of the given string.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*
 * Joins the given strings. Creates a new string and appends the second string
 * to the first one. If either string is null, null is returned.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/*
 * Removes the given characters from the beginning and the end of
 * the given string. It does not matter in which order the characters
 * are aligned. Returns a newly allocated string, containing the
 * trimmed string, or null if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/*
 * Splits the given string by the given delimiter. The delimiter
 * never takes part in the result. Returns an array of strings
 * resulting from the split, or null if an error occurred.
 */
char	**ft_split(char const *s, char c);

/*
 * Converts the given integer to a string representation. Returns
 * a newly allocated string.
 */
char	*ft_itoa(int n);

/*
 * Prints the given character to the file referenced by the given file
 * descriptor.
 */
void	ft_putchar_fd(char c, int fd);

/*
 * Writes the given string to the file indicated by the given file descriptor.
 * If the given string is null, '(null)' printed.
 */
void	ft_putstr_fd(char *s, int fd);

/*
 * Prints the given string to the file referenced by the given file
 * descriptor. Appends a newline character to it. If the given string is null,
 * '(null)' is printed, also followed by a newline.
 */
void	ft_putendl_fd(char *s, int fd);

/*
 * Prints the given number to the file associated to the given file descriptor.
 */
void	ft_putnbr_fd(int n, int fd);

/*
 * Creates a new string containing the characters from the given string derived
 * by the given function. The function gets the current character and its index
 * in the string as arguments. If no string or no function is given, null is
 * returned.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
 * Allocates a new node with the given content. The pointer to the next node
 * is set to null and the given pointer is set as content of the newly allocated
 * node. Returns the new node, or null, if the allocation fails.
 */
t_list	*ft_lstnew(void *content);

/* Injects the given node at the beginning of the given list. */
void	ft_lstadd_front(t_list **lst, t_list *new);

/*
 * Iterates through the given linked list and counts the amount of nodes.
 * Returns the amount of linked nodes.
 */
int		ft_lstsize(t_list *lst);

/*
 * Iterates through the given linked list and returns the last node found.
 * Returns null if no list is given.
 */
t_list	*ft_lstlast(t_list *lst);

/*
 * Appends the given node at the end of the given linked list. Creates a
 * new linked list, if the given list is empty.
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/*
 * Deletes the given node of a linked list. Uses the given delete function
 * to remove the content of the node, although it is completely optional.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/*
 * Deletes all nodes in the given linked list. Uses the given delete
 * function to remove the contents of the nodes, although it is
 * completely optional. Sets the pointer to the list to null.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/*
 * Iterates through the given linked list and applies the given function
 * to the content of each node. Does nothing if no list or no function is
 * given.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*
 * Creates a new linked list. The content of each new node is the original
 * content derived by the given function. If the allocation fails, the new
 * linked list is deleted using the given delete function. Otherwise, the
 * pointer to the beginning of a new linked list is returned.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif