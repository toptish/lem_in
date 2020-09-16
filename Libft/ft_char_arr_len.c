/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_arr_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 11:08:53 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:39:01 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_char_arr_len(char **arr)
{
	size_t len;

	len = 0;
	if (!*arr || !arr)
		return (0);
	while (arr[len])
		len++;
	return (len);
}