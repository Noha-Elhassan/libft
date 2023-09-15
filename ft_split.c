/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelhassa <nelhassa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 23:45:51 by nelhassa          #+#    #+#             */
/*   Updated: 2023/09/16 01:31:47 by nelhassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int		word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			i++;
			word_count++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (word_count);
}

static size_t	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static void	ft_free(char **str)
{
	size_t	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_count;
	size_t	i;
	char	**str;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	i = 0;
	str = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!str)
		return (NULL);
	while (*s && i < word_count)
	{
		while (*s == c)
			s++;
		str[i] = ft_substr(s, 0, word_len(s, c));
		if (!str[i])
		{
			ft_free(str);
			return (NULL);
		}
		while (*s != c)
			s++;
		i++;
	}
	str[word_count] = NULL;
	return (str);
}

int main()
{
	char **s = ft_split("Noha   sdfsfsdfsdfha dfs sdfkjh qiuwguwgry", ' ');
	
	int i = 0;

	while (s[i])
		printf("[%s]\n", s[i++]);
}