/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_sprite2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 21:36:10 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/14 22:03:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point_sprite2(t_sprite *sprite, t_map *map)
{
	sprite->sprite_width = (int)(map->res_x / (sprite->transform_y));
	sprite->sprite_width *= (sprite->sprite_width < 0) ? -1 : 1;
	sprite->draw_start_x = -sprite->sprite_width / 2 + sprite->sprite_screen_x;
	sprite->draw_start_x *= (sprite->draw_start_x < 0) ? 0 : 1;
	sprite->draw_end_x = sprite->sprite_width / 2 + sprite->sprite_screen_x;
	if (sprite->draw_end_x >= map->res_x)
		sprite->draw_end_x = map->res_x - 1;
}
