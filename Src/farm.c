/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   farm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 11:14:35 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/07 13:56:30 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>

void	farm_init(t_farm *farm)
{
	ft_bzero(farm, sizeof(t_farm));
	farm->start = FARM_INIT_WEIGHT;
	farm->end = FARM_INIT_WEIGHT;
}
