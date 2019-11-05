/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/05 18:21:45 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contains(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		begin;
	int		end;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = 0;
	while (s1[begin] && ft_contains(s1[begin], set))
		begin++;
	if (!s1[begin])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_contains(s1[end], set))
		end--;
	len = end - begin + 1;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + begin, len + 1);
	return (trimmed);
}
