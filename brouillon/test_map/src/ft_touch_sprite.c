/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touch_sprite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:41:52 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/29 16:53:26 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_touch_sprite(t_list_sprite **begin_list, int y, int x)
{
	t_list_sprite	*temp;

	temp = *begin_list;
	while (temp)
	{
		if (temp->x == x && temp->y == y)
		{
			temp->touch = 1;
			return ;
		}
		temp = temp->next;
	}
}
