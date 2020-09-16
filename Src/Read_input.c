/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:57:52 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:38:40 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>
#include <libft.h>
#include <read_input.h>
#include <errors.h>

static unsigned int		read_line(char *line, t_farm *farm, size_t *i)
{
	static unsigned int	state;

	state = (NO_ROOMS | NO_ANTS | NO_EDGES | NO_START | NO_END);
	if (i == 0)
	{
		validate_ants(line, &state, farm);
		return (state);
	}
	if (line[0] == '#' && line[1] == '#')
	{
		validate_cmd(line, &state, farm);
		return (state);
	}
	else if (line[0] == '#')
	{
		*i--;
		return (state);
	}
	else if (!validate_room(line, &state, farm) && !validate_edge(line, &state, farm))
	{
		state = state | ERROR;
		return (state);
	}
	return (state);
}

unsigned int			read_input(t_farm *farm)
{
	unsigned int		ret;
	char				*line;
	unsigned int		state;
	size_t				i;

	i = 0;
	while ((ret = gnl_one_desc(0, &line)))
	{
		if (ret < 0 || !line)
		{
			ft_memdel((void **)&line);
			return (-1);
		}
		state = read_line(line, farm, &i);
		free(line);
		farm->state = state;
		i++;
		if (state & ~NO_ROOMS & ~NO_EDGES & ~NO_START & ~NO_END && ~NO_ANTS && i != 0 ||
		state & ~NO_ROOMS & ~NO_EDGES & ~NO_START & ~NO_END)
			return (state);
	}
	if (state)
		return (state);
	free(line);
	return(0);
}
