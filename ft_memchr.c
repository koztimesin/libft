/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:25:02 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/13 20:17:49 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*s;

	s = str;
	if (!(s) && c != '\0')
		return (NULL);
	while (n--)
	{
		if (*s == (unsigned char) c)
			return ((void *) s);
		s++;
	}
	return (NULL);
}
