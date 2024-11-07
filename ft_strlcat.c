/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:55:29 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/06 10:33:11 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (!src || (!dest && !size))
		return (ft_strlen(src));
	while (dest[j] && j < size)
		j++;
	while (src[i] && size && (j + i) < size - 1)
	{
		if (dest)
			dest[j + i] = src[i];
		i++;
	}
	if (j < size && dest)
		dest[j + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (j + i);
}
