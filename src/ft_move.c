/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:04:31 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:23:07 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_move(t_map *map)
{
	if (map->key.key_a == 1)
	{
		if (map->map[(int)(map->player.pos_y + (map->player.dir_y *
		map->player.move_speed) * 6)][(int)(map->player.pos_x)] == '0')
			map->player.pos_y += map->player.dir_y * map->player.move_speed;
		if (map->map[(int)(map->player.pos_y)][(int)(map->player.pos_x +
		(map->player.dir_x * map->player.move_speed) * 6)] == '0')
			map->player.pos_x += map->player.dir_x * map->player.move_speed;
	}
	if (map->key.key_w == 1)
	{
		if (map->map[(int)(map->player.pos_y - map->player.dir_y *
		map->player.move_speed)][(int)map->player.pos_x] == '0')
			map->player.pos_y -= map->player.dir_y * map->player.move_speed;
		if (map->map[(int)map->player.pos_y][(int)(map->player.pos_x -
		map->player.dir_x * map->player.move_speed)] == '0')
			map->player.pos_x -= map->player.dir_x * map->player.move_speed;
	}
	ft_move2(map);
}
