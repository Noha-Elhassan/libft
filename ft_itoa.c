/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:22:39 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/15 22:35:59 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 9)
	{
		n /= 10;
		digit++;
	}
	digit++;
	return (digit);
}

static char	*ft_digit_write(char *s, long int n)
{
	int	digit_count;

	digit_count = ft_digit_count(n);
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	digit_count--;
	while (n > 0)
	{
		s[digit_count] = (n % 10) + '0';
		digit_count--;
		n /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			digit_count;

	digit_count = ft_digit_count(n);
	s = (char *)malloc(sizeof(char) * (digit_count + 1));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	s = ft_digit_write(s, n);
	s[digit_count] = '\0';
	return (s);
}

// int main ()
// { 
//     int long n;
// 	char *s;
//     n = -123;
//     printf("%d\n", ft_digit_count(n));
// 	printf("%s\n", ft_digit_write(s, n));
// 	printf("%s\n", ft_itoa(n));
// }