/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/09 21:36:55 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_uc;
	unsigned const char	*src_ucc;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_uc = (unsigned char *)dst;
	src_ucc = (unsigned const char *)src;
	i = 0;
	if (dst < src)
	{
		while (i < len)
		{
			dst_uc[i] = src_ucc[i];
			i++;
		}
	}
	else
		return (ft_memcpy(dst, src, len));
	return (dst);
}
