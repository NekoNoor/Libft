/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:21 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/30 11:59:58 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*orig;

	orig = s;
	s += ft_strlen(s);
	while (s > orig && *s != c)
		s--;
	if (s == orig && *s != c)
		return (NULL);
	return ((char *)s);
}
