/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:47:01 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 00:47:02 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	map_function(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 'a' + 'A');
// 	else
// 		return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	int		len;
	int		i;
	char	*result;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
