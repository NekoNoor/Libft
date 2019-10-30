/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:20 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/30 11:30:43 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

t_size_t	ft_strlcpy(char *dst, const char *src, t_size_t dstsize)
{
	ft_memcpy(dst, src, dstsize - 1);
	if (dstsize)
		dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
