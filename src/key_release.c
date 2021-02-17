/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:34:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 12:23:35 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	key_release(int keycode, t_map *map)
{
	if (keycode == 97)
		map->key.key_a = 0;
	if (keycode == 119)
		map->key.key_w = 0;
	if (keycode == 115)
		map->key.key_s = 0;
	if (keycode == 100)
		map->key.key_d = 0;
	if (keycode == 65361)
		map->key.key_left = 0;
	if (keycode == 65363)
		map->key.key_right = 0;
	if (keycode == 112)
		if (map->player.move_speed + 0.005 < 0.2)
			map->player.move_speed += 0.005;
	if (keycode == 109)
		if (map->player.move_speed - 0.005 > 0.001)
			map->player.move_speed -= 0.005;
	if (keycode == 111)
		if (map->player.rotate_speed + 0.005 < 0.2)
			map->player.rotate_speed += 0.005;
	if (keycode == 108)
		if (map->player.rotate_speed - 0.005 > 0.001)
			map->player.rotate_speed -= 0.005;
	return (0);
}
