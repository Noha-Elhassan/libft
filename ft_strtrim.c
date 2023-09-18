/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:47:56 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/17 22:13:13 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		j;
	int		end;
	char	*trimmed_s1;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start == end)
		return (ft_strdup(""));
	while (end >= 0 && ft_strchr(set, s1[end - 1]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	trimmed_s1 = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!trimmed_s1)
		return (NULL);
	j = 0;
	while (start < end)
		trimmed_s1[j++] = s1[start++];
	trimmed_s1[j] = '\0';
	return (trimmed_s1);
}
