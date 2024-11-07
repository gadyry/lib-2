/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:04:53 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/03 20:16:03 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cpt;
	t_list	*tmp;

	tmp = lst;
	cpt = 0;
	while (tmp)
	{
		cpt++;
		tmp = tmp->next;
	}
	return (cpt);
}
