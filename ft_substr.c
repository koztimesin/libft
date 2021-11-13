/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:28:17 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/21 17:08:25 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!(s))
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		result = ft_calloc(1, 1);
		if (!(result))
			return (NULL);
		return (result);
	}
	if (len >= ft_strlen(s) - start)
	{
		result = malloc(ft_strlen(s) - start + 1);
		if (!(result))
			return (NULL);
		ft_strlcpy(result, s + start, ft_strlen(s) - start + 1);
		return (result);
	}
	result = malloc(len + 1);
	if (!(result))
		return (NULL);
	ft_strlcpy(result, s + start, len + 1);
	return (result);
}
