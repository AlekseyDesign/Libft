/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:51:59 by jsprigga          #+#    #+#             */
/*   Updated: 2018/11/27 14:52:00 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len;

	if (*str2 == '\0')
		return ((char *)str1);
	len = ft_strlen(str2);
	while (*str1 != '\0' && n-- >= len)
	{
		if (*str1 == *str2 && ft_memcmp(str1, str2, len) == 0)
			return ((char *)str1);
		str1++;
	}
	return (NULL);
}
