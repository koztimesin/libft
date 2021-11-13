/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:09:35 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/13 18:17:49 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (i < n && dest[i])
	{
		i++;
	}
	if (n <= i)
		return (i + ft_strlen(src));
	len = ft_strlen(dest) + ft_strlen(src);
	ft_strlcpy(dest + i, src, n - i);
	return (len);
}
