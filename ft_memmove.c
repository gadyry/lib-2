/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:24:02 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/06 15:00:00 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*new_dst;
	const unsigned char	*new_src;

	if (dst == src || len == 0)
		return (dst);
	if (dst < src)
	{
		new_dst = (unsigned char *)dst;
		new_src = (const unsigned char *)src;
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst = (unsigned char *)dst + (len - 1);
		new_src = (const unsigned char *)src + (len - 1);
		while (len--)
			*new_dst-- = *new_src--;
	}
	return (dst);
}
