/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/03 17:06:11 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/17 16:06:23 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>
#include <sys/_types/_null.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hst;
	size_t	ndl;

	if (*needle == '\0')
		return ((char *)haystack);
	hst = 0;
	while (hst < len)
	{
		ndl = 0;
		while (haystack[hst + ndl] == needle[ndl] && hst + ndl < len)
		{
			ndl++;
			if (needle[ndl] == '\0')
				return ((char *)haystack + hst);
		}
		if (haystack[hst] == '\0')
			break ;
		hst++;
	}
	return (NULL);
}
