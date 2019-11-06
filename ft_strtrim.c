/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/06 22:28:13 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		begin;
	int		end;
	int		len;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	begin = 0;
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	if (!s1[begin])
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	len = end - begin + 1;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_strlcpy(trimmed, s1 + begin, len + 1);
	return (trimmed);
}
