/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:57:35 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/13 19:21:12 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!(dest) && !(src))
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		d = dest + (n - 1);
		s = src + (n - 1);
		while (n--)
		{
			*d = *s;
			d--;
			s--;
		}
	}
	return (dest);
}
