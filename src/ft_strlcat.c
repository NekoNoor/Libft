/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:20 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/30 11:36:31 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

t_size_t	ft_strlcat(char *dst, const char *src, t_size_t dstsize)
{
	t_size_t	len;

	len = ft_strlen(dst);
	ft_memcpy(dst + len, src, dstsize - len - 1);
	if (dstsize)
		dst[dstsize - 1] = '\0';
	return (len);
}
