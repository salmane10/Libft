/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:54:38 by slouham           #+#    #+#             */
/*   Updated: 2023/12/11 14:54:41 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;

	d = dest;
	if (d < s)
	{
		while (n-- > 0)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		d += n;
		s += n;
		while (n-- > 0)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
