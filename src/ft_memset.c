/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:47:27 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 13:34:54 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	*ft_memset(void *b, int c, t_size_t len)
{
	while (len)
	{
		*((char*)b) = (char)c;
		b++;
		len--;
	}
	return (b);
}
