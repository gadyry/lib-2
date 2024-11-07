/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:25:22 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/04 13:55:57 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	long	tmp_res;
	int		sign;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		sign = 44 - str[i++];
	while (str[i] && ft_isdigit(str[i]))
	{
		tmp_res = res * 10 + (str[i++] - '0');
		if (tmp_res < res && sign == 1)
			return (-1);
		else if (tmp_res < res && sign == -1)
			return (0);
		res = tmp_res;
	}
	return (sign * res);
}
