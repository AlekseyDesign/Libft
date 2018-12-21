/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:51:35 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/06 19:46:58 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char		*new_str;
	size_t		i;

	if (!(new_str = (char*)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(new_str + i) = 0;
		i++;
	}
	return (new_str);
}
