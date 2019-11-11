/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_front_bonus.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nschat <nschat@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/06 13:08:37 by nschat        #+#    #+#                 */
/*   Updated: 2019/11/11 09:56:43 by nschat        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alist == NULL)
		return ;
	if (new != NULL)
		new->next = *alst;
	*alst = new;
}
