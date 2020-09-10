/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:17:41 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/10 14:09:10 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define ANTS				(1 << 1)			
# define ROOMS				(1 << 2)
# define EDGES				(1 << 3)
# define START_END			(1 << 4)

# define ERROR				(1 << 11)
# define MEM_ERROR			(1 << 12)
# define NO_ANTS			(1 << 13)
# define NO_ROOMS			(1 << 14)
# define NO_START_END		(1 << 15)
# define NO_EDGES_M			(1 << 16)
# define CYCLES_M			(1 << 17)
# define DOUBLES			(1 << 18)
# define DOUBLES_NAMES		(1 << 19)
# define DOUBLE_EDGES		(1 << 20)
# define WRONG_CMD_M		(1 << 21)
# define OVERFLOW_ROOM_M	(1 << 22)
# define OVERFLOW_ANTS_M	(1 << 23)
# define OVERFLOW_CONN_M	(1 << 24)
# define NO_WAYS_M			(1 << 25)
# define EDGE_ERR_M			(1 << 26)
# define ROOM_ERR_M			(1 << 27)
# define ANTS_ERR_M			(1 << 28)
# define GNL_ERR_M			(1 << 29)

# define ERROR_M "Unknown error."
# define MEM_ERROR_M "Memory allocation error. Check your system."
# define NO_ANTS_M "There are no ants."
# define NO_ROOMS_M "There are no rooms."
# define NO_START_END_M "There is no start and/or end room."
# define NO_EDGES_M "There are no connections between rooms."
# define CYCLES_M "Some connections begin and end in the same room."
# define DOUBLES_COORD_M "Some rooms have the same coordinates."
# define DOUBLES_NAMES_M "Some rooms have the same names."
# define DOUBLE_EDGES_M "Some connections are identical."
# define WRONG_CMD_M "Error in comands."
# define OVERFLOW_ROOM_M "Too many rooms."
# define OVERFLOW_ANTS_M "Too many ants."
# define OVERFLOW_CONN_M "Too many connections."
# define NO_WAYS_M "There is no way from start to end."
# define EDGE_ERR_M "Error in connection definition."
# define ROOM_ERR_M "Error in room definition."
# define ANTS_ERR_M "Error in ants definition."
# define GNL_ERR_M "Reading input error."

typedef struct				s_err
{
	unsigned int			error_code;
	const char				*error_string;
}							t_err;

#endif
