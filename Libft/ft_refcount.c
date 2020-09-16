/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdorcas <gdorcas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 14:39:32 by gdorcas           #+#    #+#             */
/*   Updated: 2020/09/16 17:39:07 by gdorcas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Описание/определение структур */

/* Основная структура для подсчёта ссылок - Reference counter */
struct refcountedstruct
{
	int refcount;
};

/* Все структуры (которые необходимо отслеживать), должны
 * в качестве первой переменной иметь ссылку refcountedstruct
 */

/* Функции подсчёта ссылок */

/* Инкремент ссылок */
void REF(void *data)
{
	struct refcountedstruct *rstruct;
	rstruct = (struct refcountedstruct *) data;
	rstruct->refcount++;
}

/* Декремент ссылок */
void UNREF(void *data)
{
	struct refcountedstruct *rstruct;
	rstruct = (struct refcountedstruct *) data;
	rstruct->refcount--;

	/* Освобождение памяти, если она осталась бесхозной */
	if(rstruct->refcount == 0)
	{
		free(rstruct);
	}
}
