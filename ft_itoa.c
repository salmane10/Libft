/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:03:21 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 11:45:28 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long int n)
{
	long int	counter;

	counter = 0;
	if (n < 0)
	{
		n *= -1;
		counter++;
	}
	while (n >= 10)
	{
		counter++;
		n /= 10;
	}
	counter++;
	return (counter);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	i = int_len(nbr);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nbr < 0)
		nbr *= -1;
	i -= 1;
	while (i >= 0)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
