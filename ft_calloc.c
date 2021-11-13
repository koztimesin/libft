/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 18:32:15 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/16 21:43:01 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t		nsize;
	void		*src;

	nsize = num * size;
	src = malloc(nsize);
	if (src)
		ft_memset(src, 0, nsize);
	return (src);
}
