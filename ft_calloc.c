/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:09:39 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/15 14:34:47 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	if (size * count < 0 || size * count > INT_MAX)
		return (NULL);
	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

// int main() {
//     int *arr = (int *)ft_calloc(0, sizeof(int));
//     if (arr != NULL) {
//         printf("Memory allocated.\n");
//         free(arr);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
