/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:27:31 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/06 14:56:18 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*vr;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (SIZE_MAX - count < count || SIZE_MAX / count < size)
		return (NULL);
	vr = (char *)malloc(count * size);
	if (!vr)
		return (NULL);
	ft_bzero(vr, count * size);
	return (vr);
}
