/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:03:38 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 11:38:43 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	unsigned int	len;
	char			*str_mapi;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str_mapi = (char *)malloc((len + 1) * sizeof(char));
	if (!str_mapi)
		return (NULL);
	while (i < len)
	{
		str_mapi[i] = f(i, s[i]);
		i++;
	}
	str_mapi[i] = '\0';
	return (str_mapi);
}
