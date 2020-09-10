/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:57:57 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/10 15:46:33 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>
#include <farm.h>
#include <read_input.h>
#include <exit.h>

void		lemin(void)
{
	t_farm		farm;

	farm_init(&farm);
	if (read_input(&farm))
		ft_error(&farm);
}
