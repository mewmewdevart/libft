/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:03:34 by larcrist          #+#    #+#             */
/*   Updated: 2022/10/02 03:12:34 by larcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*source;
	char	*destiny;
	size_t	index;

	source = (char *)src;
	destiny = (char *)dest;
	index = 0;
	if (destiny > source)
	{
		while (len > 0)
		{
			destiny[len] = source[len];
			len--;
		}
	}
	else
	{
		while(index < len)
		{
			destiny[index] = source[index]; //ft_memcpy(dst, src, len);
			index++;
		}
	}
	return (dest);
}
