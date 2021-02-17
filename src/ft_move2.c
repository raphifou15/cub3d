/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:57:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/08 13:00:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_move2(t_map *map)
{
	if (map->key.key_s == 1)
	{
		if (map->map[(int)map->player.pos_y][(int)(map->player.pos_x -
		map->player.dir_y * map->player.move_speed)] == '0')
			map->player.pos_x -= map->player.dir_y * map->player.move_speed;
		if (map->map[(int)(map->player.pos_y + map->player.dir_x *
		map->player.move_speed)][(int)map->player.pos_x] == '0')
			map->player.pos_y += map->player.dir_x * map->player.move_speed;
	}
	if (map->key.key_d == 1)
	{
		if (map->map[(int)map->player.pos_y][(int)(map->player.pos_x +
		map->player.dir_y * map->player.move_speed)] == '0')
			map->player.pos_x += map->player.dir_y * map->player.move_speed;
		if (map->map[(int)(map->player.pos_y - map->player.dir_x *
		map->player.move_speed)][(int)map->player.pos_x] == '0')
			map->player.pos_y -= map->player.dir_x * map->player.move_speed;
	}
	ft_move3(map);
}
