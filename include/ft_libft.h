/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_libft.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:47:16 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 14:11:10 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

typedef unsigned long	t_size_t;

void		*ft_memset(void *b, int c, t_size_t len);
void		ft_bzero(void *s, t_size_t n);
void		*ft_memcpy(void *dst, const void *src, t_size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, t_size_t n);
void		*ft_memmove(void *dst, const void *src, t_size_t len);
void		*ft_memchr(const void *s, int c, t_size_t n);
int			ft_memcmp(const void *s1, const void *s2, t_size_t n);

t_size_t	ft_strlen(const char *s, t_size_t maxlen);
t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize);
t_size_t	ft_strlcat(char *dst, const char *src, t_size_t dstsize);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, t_size_t n);
int			ft_atoi(const char *str);

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

void		*ft_calloc(t_size_t count, t_size_t size);
char		*ft_strdup(const char *s1);

char		*ft_substr(char const *s, unsigned int start, t_size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
