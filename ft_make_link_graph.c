/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_link_graph.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 18:52:41 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 20:37:44 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_check_room(t_lem **graph, char *src, char *dest)
{
	t_lem	*temp;
	int		is_src;
	int		is_dest;

	is_src = 0;
	is_dest = 0;
	temp = *graph;
	while (temp->next != NULL)
	{
		if (ft_strcmp(src, temp->name) == 0)
			is_src = 1;
		else if (ft_strcmp(dest, temp->name) == 0)
			is_dest = 1;
		temp = temp->next;
	}
	if (ft_strcmp(src, temp->name) == 0)
		is_src = 1;
	if (ft_strcmp(dest, temp->name) == 0)
		is_dest = 1;
	if (is_dest == 1 && is_src == 1)
		return (1);
	else
		return (0);
}

int		ft_new_link(char *infos, t_lem **graph)
{
	char	*src;
	char	*dest;
	t_lem	*temp;
	t_list	*link;

	src = ft_get_src(infos);
	dest = ft_get_dest(infos);
	if (ft_check_room(graph, src, dest) == 0)
		return (0);
	//finir creation/edition de la t_list des liens
}

int		ft_make_link_graphs(char **infos, t_lem **graph)
{
	int		i;

	i = 0;
	while ((infos[i] != '\0'))
	{
		if (infos[i][0] == '#' && infos[i][1] != '#')
			i++;
		if (ft_is_char(infos[i], '-') == 0)
			return (0);
		else
		{
			if (ft_new_link(infos[i], graph) == 0)
				return (0);
		}
		i++;
	}
}
