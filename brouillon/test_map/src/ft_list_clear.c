/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:20:35 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 19:27:07 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_list_clear(t_list_sprite *begin_list, char *(*free_fct)(void *))
{
	t_list_sprite	*temp;

	temp = NULL;
	while (begin_list)
	{
		temp = begin_list;
		begin_list = begin_list->next;
		free_fct(temp);
	}
}
