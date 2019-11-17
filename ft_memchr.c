/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/17 16:03:49 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_null.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*s_ucc;
	unsigned char		c_uc;

	s_ucc = (unsigned const char *)s;
	c_uc = (unsigned char)c;
	while (n)
	{
		if (*s_ucc == c_uc)
			return ((void *)s_ucc);
		s_ucc++;
		n--;
	}
	return (NULL);
}
