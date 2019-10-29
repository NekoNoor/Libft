/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:21 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 14:15:52 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size_t n)
{
	while (*s1 == *s2 && *s1 && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*((unsigned char *)s1) - *((unsigned char *)s2));
}
