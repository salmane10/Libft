/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salman <salman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:54:38 by slouham           #+#    #+#             */
/*   Updated: 2023/12/14 18:14:52 by salman           ###   ########.fr       */
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
