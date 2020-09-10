/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 08:58:16 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/10 14:09:21 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_INPUT_H
# define READ_INPUT_H
# include <lemin.h>

unsigned int	read_input(t_farm *farm);
unsigned int	validate_cmd(char *line, unsigned int *state, t_farm *farm);
unsigned int	validate_room(char *line, unsigned int *state, t_farm *farm);
unsigned int	validate_edge(char *line, unsigned int *state, t_farm *farm);
unsigned int	validate_ants(char *line, unsigned int *state, t_farm *farm);

#endif