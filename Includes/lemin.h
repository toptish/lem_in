/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:58:12 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/07 13:56:50 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H
# include <limits.h>
# include <unistd.h>

# define MAX_NODES (INT_MAX >> 2)
# define MAX_ANTS (INT_MAX >> 2)
# define MAX_EDGES (INT_MAX >> 1)
# define FARM_INIT_WEIGHT (INT_MAX >> 1)

typedef struct		s_vect
{
	void			*ptr;
	int				len;
}					t_vect;

typedef struct		s_node
{
	unsigned int	connects_num	: 30;
	unsigned int	marked			: 1;
	unsigned int	in_queue		: 1;
	// int				separate		: 1;
	// int				marked_sep		: 1;
	unsigned int	parent			: 30;
	int				weight			: 31;
	// int				in_new_way		: 1;
}					t_node;

typedef struct 		s_graph
{
	t_node			**nodes;
	// size_t				size;
	unsigned int	start;
	unsigned int	end;
}					t_graph;

typedef struct		s_farm
{
	int				ants;
	t_vect			names;
	t_vect			connects;
	int				start;
	int				end;	
	t_graph			graph;
}					t_farm;

void				lemin(void);

#endif