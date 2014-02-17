/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 17:00:36 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 20:01:15 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		main(void)
{
	char	**infos;
	t_lem	*graph;
	int		right;//check si le graph est valide

	graph = ft_create_lem();
	infos = ft_read_infos();
	right = ft_make_graph(infos, &graph);
}
