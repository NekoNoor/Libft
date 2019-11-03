/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 17:06:11 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/03 17:13:12 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haystack_s;
	const char	*needle_s;

	haystack_s = haystack;
	needle_s = needle;
	while (*haystack_s && len)
	{
		haystack = haystack_s;
		needle = needle_s;
		while (*haystack == *needle && *haystack)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return ((char *)needle_s);
		haystack_s++;
		len--;
	}
	return (NULL);
}
