/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:20 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/05 16:56:27 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*ptr;

	if (dst == NULL || src == NULL)
		return (0);
	ptr = ft_memccpy(dst, src, '\0', dstsize - 1);
	if (ptr == NULL)
		dst[dstsize - 1] = '\0';
	return (ft_strlen(src));
}
