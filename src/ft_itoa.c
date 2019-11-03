/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 18:16:28 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/02 19:52:09 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	char	temp;
	int		len;
	int		i;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

static int	ft_numlen(int n)
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

char		*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	str = (char *)malloc(sizeof(char) * (ft_numlen(n) + 1));
	if (str == NULL)
		return (NULL);
	nbr = ABS((long)n);
	i = 0;
	if (nbr == 0)
	{
		str[i] = '0';
		i++;
	}
	while (nbr)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (n < 0)
		str[i] = '-';
	str[i + (n < 0)] = '\0';
	return (ft_strrev(str));
}
