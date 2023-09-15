/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:49:46 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/15 23:22:55 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_;
	char	*src_;

	dst_ = (char *)dst;
	src_ = (char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (dst_ > src_)
	{
		while (len > 0)
		{
			dst_[len - 1] = src_[len - 1];
			len--;
		}
	}
	else
		dst_ = ft_memcpy(dst, src, len);
	return (dst);
}
