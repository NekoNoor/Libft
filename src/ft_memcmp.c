/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 14:16:58 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (*((char *)s1) == *((char *)s2) && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*((char *)s1) - *((char *)s2));
}
