/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:43:24 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/22 18:54:36 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i)
	{
		if (str[i] == (unsigned char) c)
			return (((char *) &str[i]));
		i--;
	}
	if (str[i] == (unsigned char) c)
		return ((char *) &str[i]);
	return (NULL);
}
