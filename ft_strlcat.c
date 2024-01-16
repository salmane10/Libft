/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:55:18 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 11:40:27 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len_dst || size == 0)
		return (len_src + size);
	j = len_dst;
	while (src[i] != '\0' && i + len_dst < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_dst + len_src);
}
