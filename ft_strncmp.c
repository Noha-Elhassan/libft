/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:47:18 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 23:26:28 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*cast_s1;
	const unsigned char	*cast_s2;
	size_t				counter;

	cast_s1 = (const unsigned char *)s1;
	cast_s2 = (const unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (cast_s1[counter] != cast_s2[counter])
			return (cast_s1[counter] - cast_s2[counter]);
		if (cast_s1[counter] == '\0' || cast_s2[counter] == '\0')
			return (0);
		counter++;
	}
	return (0);
}
