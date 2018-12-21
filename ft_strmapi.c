/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:51:07 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/06 19:44:15 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*result;
	unsigned int	i;

	i = 0;
	if (!(str = (char*)malloc(ft_strlen(s))))
		return (NULL);
	result = str;
	while (*s != 0)
	{
		*str = f(i, *s);
		str++;
		s++;
		i++;
	}
	*str = 0;
	return (result);
}
