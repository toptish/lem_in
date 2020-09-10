/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:25:03 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/10 15:46:30 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <read_input.h>
#include <libft.h>
#include <errors.h>

unsigned int	validate_cmd(char *line, unsigned int *state, t_farm *farm)
{
	if (ft_strcmp("##start", line))
	{
		*state = *state & ~NO_START;
		return (1);
	}
	else if (ft_strcmp("##end", line))
	{
		*state = *state & ~NO_END;
		return (1);
	}
	else
	{
		*state = *state & WRONG_CMD;
		return (0);
	}
	
}

unsigned int	validate_room(char *line, unsigned int *state, t_farm *farm)
{
	if (ft_strchr(line, " "))
		ft_strsplit
}

unsigned int	validate_edge(char *line, unsigned int *state, t_farm *farm)
{
	
}

unsigned int	validate_ants(char *line, unsigned int *state, t_farm *farm)
{
	if (ft_is_number(line))
		*state = *state & ~NO_ANTS;
}
