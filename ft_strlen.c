/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:20 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/17 16:05:25 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
