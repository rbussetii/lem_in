/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_link_graph.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 18:52:41 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 20:26:48 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char	*ft_get_dest(char *infos)
{
	int		i;
	int		j;
	char	*dest;

	while (infos[i] != '-')
		i++;
	i++;
	j = i;
	dest = malloc(sizeof(char) * j);
	i = 0;
	while (infos[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_get_src(char *infos)
{
	int		i;
	char	*src;

	i = 0;
	while (infos != '-')
		i++;
	src = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (infos[i] != '-')
	{
		src[i] = infos[i];
		i++;
	}
	src[i] = '\0';
	return (src);
}
