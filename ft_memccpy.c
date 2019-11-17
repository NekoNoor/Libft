/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/17 16:03:34 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_null.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_uc;
	unsigned const char	*src_ucc;
	unsigned char		c_uc;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_uc = (unsigned char *)dst;
	src_ucc = (unsigned const char *)src;
	c_uc = (unsigned char)c;
	while (n)
	{
		*dst_uc = *src_ucc;
		if (*src_ucc == c_uc)
			return ((void *)(dst_uc + 1));
		dst_uc++;
		src_ucc++;
		n--;
	}
	return (NULL);
}
