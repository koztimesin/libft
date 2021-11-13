/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 17:45:43 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/08 19:49:50 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!(s))
		return (NULL);
	ft_strlcpy(s, str, i + 1);
	return (s);
}
