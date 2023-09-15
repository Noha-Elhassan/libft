/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:45:08 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 00:45:12 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*strp;

	strp = (char *)str;
	while (*strp)
	{
		if (*strp == (char)c)
		{
			return (strp);
		}
		strp++;
	}
	if (c == 0)
		return (strp);
	return (NULL);
}
