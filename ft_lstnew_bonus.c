/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaffron <ksaffron@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:07:55 by ksaffron          #+#    #+#             */
/*   Updated: 2021/10/26 18:46:31 by ksaffron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*src;

	src = (t_list *)malloc(sizeof(t_list));
	if (src)
	{
		src -> content = content;
		src -> next = NULL;
	}
	return (src);
}
