/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:27 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/30 11:58:41 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, t_size_t len)
{
	char	*substr;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
