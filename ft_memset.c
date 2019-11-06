/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:47:27 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/06 18:19:14 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (b == NULL)
		return (b);
	while (len)
	{
		len--;
		((unsigned char *)b)[len] = (unsigned char)c;
	}
	return (b);
}
