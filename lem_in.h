/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbusseti <rbusseti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/13 15:22:03 by rbusseti          #+#    #+#             */
/*   Updated: 2014/02/17 18:52:13 by rbusseti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H

# define LEM_IN_H

# include "libft.h"
					
typedef struct		s_lem
{
	struct s_lem	*next;
	struct s_lem	*prev;
	struct s_list	*link;
	int				lem_nbr;
	int				start;
	int				end;
	int				weight;
	char			*name;
}					t_lem;

char	**ft_read_infos(void);
t_lem	*ft_create_lem(void);
void	ft_lem_push_back(t_lem **lem, char *name);

#endif /* !LEM_IN_H */
