/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/03 16:35:09 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst_c;
	unsigned const char	*src_c;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_c = dst;
	src_c = src;
	while (n)
	{
		*dst_c = *src_c;
		if (*src_c == (unsigned char)c)
			break ;
		dst_c++;
		src_c++;
		n--;
	}
	if (*dst_c == (unsigned char)c)
		return ((void *)dst_c + 1);
	return (NULL);
}
