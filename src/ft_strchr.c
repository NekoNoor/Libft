/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:20 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/30 11:59:40 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (!*s && *s != c)
		return (NULL);
	return ((char *)s);
}
