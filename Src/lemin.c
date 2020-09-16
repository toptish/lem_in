/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:57:57 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:38:37 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>
#include <farm.h>
#include <read_input.h>
#include <exit.h>

int		main(void)
{
	t_farm		farm;

	farm_init(&farm);
	if (read_input(&farm))
		ft_error(&farm);
	ft_free_memory(&farm);
}
