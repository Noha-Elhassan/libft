/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:46:31 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 00:46:33 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendest;
	size_t	len;

	if (dst == (void *)0 && dstsize == 0)
		return (0);
	lendest = ft_strlen(dst);
	if (dstsize <= lendest)
		return (dstsize + ft_strlen(src));
	len = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[len] != '\0' && lendest + 1 < dstsize)
	{
		dst[lendest] = src[len];
		lendest++;
		len++;
	}
	dst[lendest] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[len]));
}
// int main()
// {
// 	char sre[]="ali ";
// 	char dst[]="ahmed";
// 	printf("%s", ft_strlcat())
// }