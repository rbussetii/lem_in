/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 16:29:05 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 17:00:19 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_lem	*ft_create_lem(void)
{
	t_lem	*elem;

	elem = malloc(sizeof(elem));
	elem->next = NULL;
	elem->prev = NULL;
	elem->lem_nbr = 0;
	elem->start = 0;
	elem->end = 0;
	elem->weight = 0;
	elem->name = NULL;
	return (elem);
}

void	ft_lem_push_back(t_lem **lem, char *name)
{
	t_lem	*temp;
	t_lem	*new_link;

	temp = *lem;
	new_link = ft_create_lem();
	new_link->name = name;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_link;
	new_link->prev = temp;
}
