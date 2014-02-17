/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_graph.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 12:32:06 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 19:13:46 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	ft_put_end(t_lem **graph, char *infos)
{
	int		i;
	char	*name;

	while (infos[i] != ' ')
		i++;
	name = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (infos[i] != ' ')
	{
		name[i] = infos[i];
		i++;
	}
	name[i] = '\0';
	ft_lem_push_back(graph, name);
	while ((*graph)->next != NULL)
		(*graph) = (*graph)->next;
	(*graph)->end = 1;
}

void	ft_put_start(t_lem **graph, char *infos)
{
	int		i;
	char	*name;

	while (infos[i] != ' ')
		i++;
	name = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (infos[i] != ' ')
	{
		name[i] = infos[i];
		i++;
	}
	name[i] = '\0';
	(*graph)->name = name;
	(*graph)->start = 1;
}

void	ft_new_room(char *infos, t_lem **graph)
{
	char	*name;
	int		i;

	while (infos[i] != ' ')
		i++;
	name = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (infos[i] != ' ')
	{
		name[i] = infos[i];
		i++;
	}
	name[i] = '\0';
	ft_lem_push_back(graph, name);
}

int		ft_make_graph(char **infos, t_lem **graph)
{
	int		i;

	i = 1;
	if (ft_is_nbr_lem(infos[0], graph) == 0)
		return (0);
	while ((infos[i] != '\0') && (ft_is_char(infos[i], '-') == 0))
	{
		if (infos[i][0] == '#' && infos[i][1] != '#')
			i++;
		if (ft_is_char(infos[i], ' ') == 1 && infos[i][0] != '#')
			ft_new_room(infos[i], graph);
		if (ft_strcmp(infos[i], "##start") == 0)
		{
			i++;
			if (ft_is_char(infos[i], ' ') == 0)
				return (0);
			ft_put_start(graph, infos[i]);
		}
		if (ft_strcmp(infos[i], "##end"))
		{
			i++;
			if (ft_is_char(infos[i], ' ') == 0)
				return (0);
			ft_put_end(graph, infos[i]);
		}
		i++;
	}
	i = ft_make_link_graph(infos + i, graph);
	return (i);
}
