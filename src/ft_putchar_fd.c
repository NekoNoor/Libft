/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:29 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 14:19:05 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <unistdt.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, c, 1);
}
