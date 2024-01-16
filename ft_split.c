/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slouham <slouham@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 15:02:53 by slouham           #+#    #+#             */
/*   Updated: 2024/01/16 11:42:39 by slouham          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			while (*s && *s != c)
				s++;
			counter++;
		}
		else
			s++;
	}
	return (counter);
}

static char	**free_sub(char **sub_str, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(sub_str[i]);
		i++;
	}
	free(sub_str);
	return (NULL);
}

static char	*fill_sub(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (len > 0)
	{
		dest[i] = src[i];
		i++;
		len--;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**splited(char **sub_str, const char *s, char c, size_t sub_count)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] && j < sub_count)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		sub_str[j] = (char *)malloc((len + 1) * sizeof(char));
		if (!sub_str[j])
			return (free_sub(sub_str, j));
		fill_sub(sub_str[j], &s[i - len], len);
		len = 0;
		j++;
	}
	sub_str[j] = NULL;
	return (sub_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	sub_count;
	char	**sub_str;

	if (s == NULL)
		return (NULL);
	sub_count = words_count((char *)s, c);
	sub_str = (char **)malloc((sub_count + 1) * sizeof(char *));
	if (!sub_str)
		return (NULL);
	sub_str = splited(sub_str, s, c, sub_count);
	return (sub_str);
}
