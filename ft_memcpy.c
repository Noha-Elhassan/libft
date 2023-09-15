/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 02:26:13 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/15 22:34:08 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst_;
	unsigned char	*src_;

	dst_ = (unsigned char *)dest;
	src_ = (unsigned char *)src;
	i = 0;
	if (dst_ == src_ || (dst_ == NULL && src_ == NULL ))
	{
		return (dst_);
	}
	while (i < n)
	{
		dst_[i] = src_[i];
		i++;
	}
	return (dst_);
}
