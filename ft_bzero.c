/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:39:55 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/14 20:57:30 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	if (n > 0)
	{
		ft_memset(str, 0, n);
	}
}

// int main()
// {
// 	char b[10] = "57678";
// 	ft_bzero(b, 1);
// 	write(1, &b, 5);
// 	write(1, &"\n", 5);
// 	ft_bzero(b, 3);
// 	write(1, &b, 5);
// }
