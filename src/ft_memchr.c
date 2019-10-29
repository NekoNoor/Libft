/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 18:45:18 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void		*ft_memchr(const void *s, int c, t_size_t n)
{
	while (*((const char *)s) && *((const char *)s) != c && n)
	{
		s++;
		n--;
	}
	if (!n && *((const char *)s) != c)
		return (NULL);
	return ((void *)s);
}
