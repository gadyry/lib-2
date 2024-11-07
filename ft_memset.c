/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:34:49 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/06 14:26:16 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	val;

	i = 0;
	val = (unsigned char)c;
	str = (unsigned char *)b;
	while (i < len)
	{
		str[i] = val;
		i++;
	}
	return (b);
}
