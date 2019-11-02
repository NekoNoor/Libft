/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:19 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/02 17:25:58 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s1_c;
	unsigned const char	*s2_c;

	s1_c = s1;
	s2_c = s2;
	while (*s1_c == *s2_c && n)
	{
		s1_c++;
		s2_c++;
		n--;
	}
	return (*s1_c - *s2_c);
}
