/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:47:27 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/02 17:28:33 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len)
	{
		*((unsigned char *)b) = (unsigned char)c;
		b++;
		len--;
	}
	return (b);
}
