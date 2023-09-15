/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:40:23 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/15 19:52:41 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			len;
	unsigned char	*str_1; 
	unsigned char	*str_2;

	str_1 = (unsigned char *)str1;
	str_2 = (unsigned char *)str2;
	len = 0;
	while (len < n)
	{
		if (str_1[len] != str_2[len])
		{
			return (str_1[len] - str_2[len]);
		}
		len++;
	}
	return (0);
}
