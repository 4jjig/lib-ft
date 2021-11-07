#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
}               t_list;

int ft_strlen(char *str);
char	*ft_strdup(char *src);
int ft_isdigit(int c);
int ft_isascii(int c);
int	ft_isalpha(int c);
int ft_isalnum(int c);
char    **ft_split(char const *s, char c);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(char *s, int c);
void    *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strrchr(char *s, int c);
void    *ft_memmove(void *dest, const void *src, size_t n);
char    *ft_itoa(int n);
void    *ft_memchr(const void *s, int c, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char    *ft_strjoin(char const *s1, char const *s2);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(const char	*big, const char *little, size_t len);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char    **ft_split(char const *s, char c);
void    ft_putchar_fd(char c, int fd);

#endif