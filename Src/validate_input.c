/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 14:25:03 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:38:41 by gdorcas          ###   ########.fr       */
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
		*state = *state | WRONG_CMD;
		return (0);
	}
}

void			get_room(char **room, unsigned int *state, t_farm *farm)
{
	farm->names_int
}

unsigned int	validate_room(char *line, unsigned int *state, t_farm *farm)
{
	char	**room;
	size_t	len;
	
	if (ft_strchr(line, ' '))
		room = ft_strsplit(line, ' ');
	else
		return(0);
	if ((len = ft_char_arr_len(room) != 3) ||
			(!ft_is_number(room[1]) || !ft_is_number(room[2])))
	{
		*state = *state | ROOM_ERR;
		return (0);
	}
	else if (!check_duplicates(room))
	{

	}
	else
	{
		// *state = *state & ~NO_ROOMS;
		get_room(room, state, farm);
		*state = *state & ~(START | END);
	}
}

unsigned int	validate_edge(char *line, unsigned int *state, t_farm *farm)
{
	char	**edge;

	if (ft_strchr(line, '-'))
		edge = ft_strsplit
}

unsigned int	validate_ants(char *line, unsigned int *state, t_farm *farm)
{
	if (ft_is_number(line))
	{
		farm->ants = ft_atoi(line);
		if (farm->ants > MAX_ANTS)
		{
			*state = *state & ~NO_ANTS;
			*state = *state | OVERFLOW_ANTS;
			return (0);
		}
		if (farm->ants == 0)
			return (0);
		return (1);
	}
	else
	{
		*state = *state & ~NO_ANTS;
		*state = *state | ANTS_ERR;
		return (0);
	}
}
