/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:00:08 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/16 18:49:37 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t		i;
	size_t		s1;
	size_t		s2;

	i = 0;
	s1 = ft_strlen(str1);
	s2 = ft_strlen(str2);
	if (!(*str2))
		return ((char *) str1);
	if (s2 > n || !(str1))
		return (NULL);
	if (n >= s1)
		n = s1;
	while (str1[i] && n - i >= s2)
	{
		if (ft_strncmp(&str1[i], str2, s2) == 0)
			return ((char *) &str1[i]);
		i++;
	}
	return (NULL);
}
