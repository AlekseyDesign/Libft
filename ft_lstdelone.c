/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:47:57 by jsprigga          #+#    #+#             */
/*   Updated: 2018/12/06 19:39:35 by jsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*p;

	p = *alst;
	if (p == NULL || alst == NULL)
		return ;
	p->next = NULL;
	if (del != NULL)
		del(p->content, p->content_size);
	free(p);
	*alst = NULL;
}
