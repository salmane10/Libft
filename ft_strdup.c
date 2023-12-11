/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:00:32 by slouham           #+#    #+#             */
/*   Updated: 2023/12/11 15:00:34 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup_str;

	len = ft_strlen(s) + 1;
	dup_str = (char *)malloc(len);
	if (dup_str == NULL)
		return (NULL);
	ft_memcpy(dup_str, s, len);
	return (dup_str);
}
