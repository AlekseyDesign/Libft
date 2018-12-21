/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:48:21 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/10 11:22:15 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memalloc(size_t size)
{
	void	*link;
	size_t	i;

	link = malloc(sizeof(*link) * size);
	if (link == NULL)
		return (NULL);
	i = 0;
	while (i < size)
		((char *)link)[i++] = '\0';
	return (link);
}
