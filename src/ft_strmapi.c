/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:51:56 by coder             #+#    #+#             */
/*   Updated: 2022/10/16 23:53:27 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	indice;
	unsigned int	length;
	char			str;

	len = ft_strlen(s);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	indice = 0;
	while (s[indice] != '\0')
	{
		str[indice] = (*f)(indice, s[indice]);
		indice++;
	}
	return (str);
}
