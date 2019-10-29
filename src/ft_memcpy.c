/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:18 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 16:08:13 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size_t n)
{
	unsigned char		*dst_c;
	unsigned const char *src_c;

	dst_c = dst;
	src_c = src;
	while (n)
	{
		*dst_c = *src_c;
		dst_c++;
		src_c++;
		n--;
	}
	return (dst);
}
