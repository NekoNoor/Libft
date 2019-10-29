/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 18:43:15 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memcpy_rev(void *dst, const void *src, t_size_t n)
{
	while (n)
	{
		((char *)dst)[n] = ((char *)src)[n];
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, t_size_t len)
{
	if (src + len > dst)
		ft_memcpy_rev(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
