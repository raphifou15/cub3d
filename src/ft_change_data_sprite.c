/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_data_sprite.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:30:31 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 17:55:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_change_data_sprite(t_sprite *sprite)
{
	double	dist;
	double	pos_x;
	double	pos_y;

	dist = sprite->dist;
	pos_x = sprite->pos_x;
	pos_y = sprite->pos_y;
	sprite->dist = sprite->next->dist;
	sprite->pos_x = sprite->next->pos_x;
	sprite->pos_y = sprite->next->pos_y;
	sprite->next->dist = dist;
	sprite->next->pos_x = pos_x;
	sprite->next->pos_y = pos_y;
}
