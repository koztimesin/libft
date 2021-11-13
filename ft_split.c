/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 20:38:06 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/26 18:46:01 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = -1;
	words = 0;
	while (s[++i])
		if (s[i + 1] != c && s[i] == c && s[i + 1] != '\0')
			words++;
	if (s[0] != c && s[0] != '\0')
		words++;
	return (words);
}

static char	**ft_free_space(char **dest)
{
	int	j;

	j = 0;
	while (dest[j])
		free(dest[j++]);
	free(dest);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		words;
	int		i;
	int		j;

	j = -1;
	i = 0;
	if (!(s))
		return (NULL);
	words = ft_count_words(s, c);
	dest = malloc(sizeof(char *) * (words + 1));
	if (!(dest))
		return (NULL);
	dest[words] = NULL;
	while (++j < words)
	{
		while (s[i] == c && s[i])
			i++;
		dest[j] = ft_substr(s, i, ft_strchr(&s[i], c) - &s[i]);
		if (!(dest[j]))
			return (ft_free_space(dest));
		i += ft_strlen(dest[j]);
	}
	return (dest);
}
