/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_sprite.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 19:09:35 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/14 22:09:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point_sprite(t_sprite *sprite, t_map *map)
{
	sprite->sprite_x = sprite->pos_x - map->player.pos_x;
	sprite->sprite_y = sprite->pos_y - map->player.pos_y;
	sprite->inv_det = 1.0 / (map->player.plane_x * map->player.dir_y -
	map->player.dir_x * map->player.plane_y);
	sprite->transform_x = sprite->inv_det * (map->player.dir_y *
	sprite->sprite_x - map->player.dir_x * sprite->sprite_y);
	sprite->transform_y = sprite->inv_det * (-map->player.plane_y *
	sprite->sprite_x + map->player.plane_x * sprite->sprite_y);
	sprite->sprite_screen_x = (int)((map->res_y / 2) * (1 + sprite->transform_x
	/ sprite->transform_y));
	sprite->sprite_height = (map->res_x >= map->res_y) ? (int)(map->res_x /
	(sprite->transform_y)) : (int)(map->res_y / (sprite->transform_y));
	sprite->sprite_height *= (sprite->sprite_height < 0) ? -1 : 1;
	sprite->draw_start_y = -sprite->sprite_height / 2 + map->res_y / 2;
	sprite->draw_start_y *= (sprite->draw_start_y < 0) ? 0 : 1;
	sprite->draw_end_y = sprite->sprite_height / 2 + map->res_y / 2;
	if (sprite->draw_end_y >= map->res_y)
		sprite->draw_end_y = map->res_y - 1;
	ft_point_sprite2(sprite, map);
}
