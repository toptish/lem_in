/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 17:29:52 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:38:36 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>

void	farm_init(t_farm *farm)
{
	ft_bzero(farm, sizeof(t_farm));
	farm->start = FARM_INIT_WEIGHT;
	farm->end = FARM_INIT_WEIGHT;
}

void	get_rooms()
{

}

void	get_edges()
{

}

static t_node	**create_node(t_room *room)
{

}	