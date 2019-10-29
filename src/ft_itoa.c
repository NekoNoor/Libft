/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/10/29 19:47:28 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		str[i] = str[len - i - 1];
		i++;
	}
	return (str);
}

int		ft_numlen(int n)
{
	int	len;

	len = (n <= 0) ? 1 : 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = (char *)str(sizeof(char) * (ft_numlen(n) + 1));
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		n *= -1;
		i++;
	}
	while (n)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
