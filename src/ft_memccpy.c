/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 17:48:33 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, t_size_t n)
{
	while (n)
	{
		*((char *)dst) = *((const char *)src);
		if (*((char *)src) != (unsigned char)c)
			break ;
		dst++;
		src++;
		n--;
	}
	if (*((char *)dst) == (unsigned char)c)
		return (dst + 1);
	return (NULL);
}
