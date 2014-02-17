/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_infos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 17:06:32 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 12:07:35 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char	**ft_read_infos(void)
{
	char	*buffer;
	char	**char_infos;
	t_list	*infos;
	int		i;

	if (get_next_line(0, &buffer) > 0)
		infos = ft_create_elem(buffer);
	i = 1;
	while (get_next_line(0, &buffer) > 0)
	{
		ft_list_push_back(&infos, buffer);
		i++;
	}
	char_infos = malloc(sizeof(char *) * (i + 2));
	i = 0;
	while (infos->next != NULL)
	{
		char_infos[i] = infos->content;
		infos = infos->next;
		i++;
	}
	char_infos[i] = infos->content;
	char_infos[i + 1] = '\0';
	ft_list_destroy(&infos);
	return (char_infos);
}
