/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 09:17:41 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/07 13:56:47 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define ERROR "Unknown error."
# define MEM_ERROR "Memory allocation error. Check your system."
# define NO_ANTS "There are no ants."
# define NO_ROOMS "There are no rooms."
# define NO_START_END "There is no start and/or end room."
# define NO_EDGES "There are no connections between rooms."
# define CYCLES "Some connections begin and end in the same room."
# define DOUBLES_COORD "Some rooms have the same coordinates."
# define DOUBLES_NAMES "Some rooms have the same names."
# define DOUBLE_EDGES "Some connections are identical."
# define WRONG_CMD "Error in comands."
# define OVERFLOW_ROOM "Too many rooms."
# define OVERFLOW_ANTS "Too many ants."
# define OVERFLOW_CONN "Too many connections."
# define NO_WAYS "There is no way from start to end."
# define EDGE_ERR "Error in connection definition."
# define ROOM_ERR "Error in room definition."
# define ANTS_ERR "Error in ants definition."
# define GNL_ERR "Reading input error."

#endif
