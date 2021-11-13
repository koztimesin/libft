/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 20:12:35 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/21 16:34:32 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;

	i = 0;
	if (s1 && s2)
	{
		s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!s3)
			return (NULL);
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
		s3[i] = '\0';
		ft_strlcat(s3, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
		return (s3);
	}
	return (NULL);
}
