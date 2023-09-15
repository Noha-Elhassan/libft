/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:47:30 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 00:47:31 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t len)
{
	size_t	ptnlen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ptnlen = ft_strlen(pattern);
	if (ptnlen == 0)
		return ((char *)str);
	if (str == NULL && len == 0)
		return (NULL);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j + i] == pattern[i] && (j + i) < len)
		{
			while (str[j + i] == '\0' && pattern[i] == '\0')
				return ((char *)&str[j]);
			i++;
		}
		if (pattern[i] == '\0')
			return ((char *)str + j);
		j++;
	}
	return (NULL);
}
