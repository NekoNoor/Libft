/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/08 13:41:39 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrdcount(char const *str, char delim)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == delim)
			str++;
		if (*str)
			count++;
		while (*str != delim && *str)
			str++;
	}
	return (count);
}

static int	ft_wrdlen(char const *str, char delim)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != delim)
		len++;
	return (len);
}

static char	*ft_wrddup(char const **src, char delim)
{
	char	*dup;
	int		len;

	while (*(*src) == delim)
		(*src)++;
	len = ft_wrdlen(*src, delim);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_memccpy(dup, *src, delim, len + 1);
	dup[len] = '\0';
	*src += len;
	return (dup);
}

static void	free_arr(char **arr)
{
	while (*arr)
	{
		free(*arr);
		arr++;
	}
	free(arr);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	size;
	size_t	i;

	if (s == NULL)
		return (NULL);
	size = ft_wrdcount(s, c);
	arr = (char **)malloc((size + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (*s && i < size)
	{
		arr[i] = ft_wrddup(&s, c);
		if (arr[i] == NULL)
		{
			free_arr(arr);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
