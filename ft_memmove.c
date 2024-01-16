/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:54:38 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 11:44:13 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (!n || dest == src)
		return ((void *)dest);
	if (dest <= src)
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(const unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		while (n--)
			*(unsigned char *)(dest + n) = *(const unsigned char *)(src + n);
	}
	return (dest);
}
