/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:27 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/05 17:51:28 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dup;
	int		s1len;
	int		s2len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	dup = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s1, s1len + 1);
	ft_strlcat(dup, s2, s1len + s2len + 1);
	return (dup);
}
