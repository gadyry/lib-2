/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-gady <ael-gady@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:30:57 by ael-gady          #+#    #+#             */
/*   Updated: 2024/11/03 15:43:22 by ael-gady         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;
	unsigned int	l;
	size_t			buff;

	if (!s)
		return (NULL);
	l = (unsigned int)ft_strlen(s);
	i = 0;
	if (start >= l)
		return (ft_strdup(""));
	if (len > l - start)
		buff = l - start;
	else
		buff = len;
	substr = (char *)malloc((buff + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (*(s + start + i) && i < buff)
	{
		*(substr + i) = *(s + start + i);
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}
