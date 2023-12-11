/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:53:32 by slouham           #+#    #+#             */
/*   Updated: 2023/12/11 14:53:34 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = s;
	uc = (unsigned char)c;
	while (n-- > 0)
	{
		*ptr++ = uc;
	}
	return (s);
}
