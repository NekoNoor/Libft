/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 17:48:21 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/05 15:52:30 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_longcheck(long nbr, int sign, char next)
{
	if (nbr > 922337203685477580)
		return ((sign == -1) ? 0 : -1);
	if (nbr == 922337203685477580 && sign == -1 && next > '8')
		return (0);
	if (nbr == 922337203685477580 && sign == 1 && next > '7')
		return (-1);
	return (1);
}

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		sign;
	long	nbr;

	while (ft_isspace(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	nbr = 0;
	while (ft_isdigit(*str))
	{
		if (ft_longcheck(nbr, sign, *str) != 1)
			return (ft_longcheck(nbr, sign, *str));
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return ((int)nbr * sign);
}
