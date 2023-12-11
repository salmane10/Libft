/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:57:29 by slouham           #+#    #+#             */
/*   Updated: 2023/12/11 14:57:31 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (n > 0)
	{
		if (*(unsigned char *)s == uc)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}
