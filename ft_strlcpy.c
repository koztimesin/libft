/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:01:33 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/16 20:58:47 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(src);
	if (len < n)
		ft_memcpy(dest, src, len + 1);
	else if (n != 0)
	{
		ft_memcpy(dest, src, n);
		dest[n - 1] = '\0';
	}
	return (len);
}
