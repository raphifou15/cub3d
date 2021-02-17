/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprite_order.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:57:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/11 18:16:39 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_sprite_order(t_sprite **sprite)
{
	t_sprite	*temp;
	t_sprite	*temp2;

	temp = NULL;
	temp2 = NULL;
	temp = *sprite;
	temp2 = *sprite;
	while (temp->next)
	{
		if (temp->dist < temp->next->dist)
		{
			ft_change_data_sprite(temp);
			temp = temp2;
		}
		else
			temp = temp->next;
	}
}
