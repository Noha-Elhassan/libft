/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:45:24 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 21:13:10 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str_dup;

	len = ft_strlen(s1);
	str_dup = (char *)malloc(len + 1);
	if (!str_dup)
		return (NULL);
	ft_memcpy(str_dup, s1, len + 1);
	return (str_dup);
}
