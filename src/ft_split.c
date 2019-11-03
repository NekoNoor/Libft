/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/31 16:06:09 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_countwords(const char *str, char delim)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == delim)
			str++;
		if (*str)
			count++;
		while (*str && *str != delim)
			str++;
	}
	return (count);
}

static const char	*ft_copyword(char *dst, char const *src, char delim)
{
	int		len;

	len = 0;
	while (src[len] && src[len] != delim)
		len++;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, src, len + 1);
	return (src + len);
}

char				**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	arr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			s = ft_copyword(arr[i], s, c);
			if (s == NULL)
				return (NULL);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
