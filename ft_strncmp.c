/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:10:17 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/16 21:39:11 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!(n))
		return (0);
	while (str1[i] && str1[i] == str2[i] && i < n - 1)
		i++;
	return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
