/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:29 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 19:30:08 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <unistd.h>

void		ft_putendl_fd(int n, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
