/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/09 20:34:36 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char const	*ft_skip_delim(char const *s, char c)
{
	s = ft_strchr(s, c);
	if (s == NULL)
		return (NULL);
	while (*s == c)
		s++;
	return (s);
}

static size_t		ft_arr_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	s = ft_skip_delim(s, c);
	if (s == NULL || c == '\0')
		return (1);
	while (s)
	{
		s = ft_skip_delim(s, c);
		if (s != NULL)
			size++;
	}
	return (size);
}

static size_t		ft_split_size(char const *s, char c)
{
	size_t	size;
	char	*delim;

	delim = ft_strchr(s, c);
	if (delim == NULL)
		return (0);
	size = delim - s;
	return (size);
}

static void			ft_free_arr(char **arr, size_t i)
{
	while (i)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

char				**ft_split(char const *s, char c)
{
	char		**arr;
	char const	*orig;
	size_t		size;
	size_t		i;

	if (s == NULL)
		return (NULL);
	orig = s;
	size = ft_arr_size(s, c);
	arr = (char **)malloc(sizeof(char *) * (size + 1));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s)
	{
		s = ft_skip_delim(s, c);
		if (i == 0 && (s == NULL || c == '\0'))
			arr[i] = ft_strdup(orig);
		else
			arr[i] = ft_substr(s, 0, ft_split_size(s, c));
		if (arr[i] == NULL)
		{
			ft_free_arr(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
