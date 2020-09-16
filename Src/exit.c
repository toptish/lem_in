/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:02:26 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:38:35 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exit.h>
#include <lemin.h>
#include <errors.h>

static	t_err		g_err[] =
{
	{ERROR, ERROR_M},
	{MEM_ERROR, MEM_ERROR_M},
	{NO_ANTS, NO_ANTS_M},
	{NO_ROOMS, NO_ROOMS_M},
	{NO_START, NO_START_M},
	{NO_END, NO_END_M},
	{NO_EDGES, NO_EDGES_M},
	{CYCLES, CYCLES_M},
	{DOUBLES_COORD, DOUBLES_COORD_M},
	{DOUBLES_NAMES, DOUBLES_NAMES_M},
	{DOUBLE_EDGES, DOUBLE_EDGES_M},
	{WRONG_CMD, WRONG_CMD_M},
	{OVERFLOW_ROOM, OVERFLOW_ROOM_M},
	{OVERFLOW_ANTS, OVERFLOW_ANTS_M},
	{OVERFLOW_CONN, OVERFLOW_CONN_M},
	{NO_WAYS, NO_WAYS_M},
	{EDGE_ERR, EDGE_ERR_M},
	{ROOM_ERR, ROOM_ERR_M},
	{ANTS_ERR, ANTS_ERR_M},
	{GNL_ERR, GNL_ERR_M},
};

void				ft_free_memory()
{
	
}

int					ft_error(t_farm *farm)
{
	if (farm->state)
		return (1);
	return (0);
}
