/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:57:52 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/07 13:56:36 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lemin.h>
#include <libft.h>
#include <read_input.h>

static unsigned int		read_line(char **line, t_farm *farm)
{
	
}

int						read_input(t_farm *farm)
{
	unsigned int		ret_gnl;
	char				*line;
	unsigned int		ret;

	while ((ret = gnl_one_desc(0, &line)))
	{
		if (ret < 0 || !line)
		{
			ft_memdel((void **)&line);
			return (-1);
		}
		ret = read_line(&line, farm);
		free(line);
		if (ret)
			return (ret);
	}
	free(line);
	return(0);
}
