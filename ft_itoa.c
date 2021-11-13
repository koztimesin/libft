/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:22:19 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/25 16:37:22 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void	ft_getnb(char *dest, int n, int len)
{
	if (n < 0)
		n *= -1;
	while (len)
	{
		dest[len - 1] = '0' + (n % 10);
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*dest;

	dest = malloc(ft_getsize(n) + 1);
	if (!(dest))
		return (NULL);
	dest[ft_getsize(n)] = '\0';
	if (n == -2147483648)
	{
		dest[0] = '-';
		dest[1] = '2';
		ft_getnb(&dest[2], 147483648, ft_getsize(147483648));
		return (dest);
	}
	if (n < 0)
	{
		dest[0] = '-';
		ft_getnb(&dest[1], n, ft_getsize(n) - 1);
		return (dest);
	}
	ft_getnb(dest, n, ft_getsize(n));
	return (dest);
}
