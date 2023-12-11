/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:01:24 by slouham           #+#    #+#             */
/*   Updated: 2023/12/11 15:01:28 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*total;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	total = (char *)malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!total)
		return (NULL);
	ft_strlcpy(total, s1, ls1 + 1);
	ft_strlcat(total + ls1, s2, ls2 + 1);
	return (total);
}
