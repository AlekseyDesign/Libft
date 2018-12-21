/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:52:12 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/06 19:47:28 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		count_of_words(const char *s, char del)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != del && (*(s + 1) == del || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

int		mem(char **a, int c, int *s, int *t)
{
	int i;

	i = 0;
	while (i < c)
	{
		if (!(a[i] = (char *)malloc((200) * sizeof(char))))
			return (1);
		i++;
	}
	*s = 0;
	*t = 0;
	return (0);
}

char	**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**arr;
	int		i;
	int		j;

	count = count_of_words(s, c);
	if (!(arr = (char **)malloc((count + 1) * sizeof(char *))))
		return (NULL);
	arr[count] = NULL;
	if (mem(arr, count, &i, &j) == 1)
		return (NULL);
	while (i < count)
	{
		if (*s != c)
			arr[i][j++] = *s;
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
		{
			arr[i][j] = '\0';
			i++;
			j = 0;
		}
		s++;
	}
	return (arr);
}
