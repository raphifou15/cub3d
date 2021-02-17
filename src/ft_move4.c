/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:39:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/08 13:41:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_move4(t_map *map)
{
	double	old_dir_x;
	double	old_plane_x;

	if (map->key.key_left == 1)
	{
		old_dir_x = map->player.dir_x;
		map->player.dir_x = map->player.dir_x * cos(map->player.rotate_speed) -
		map->player.dir_y * sin(map->player.rotate_speed);
		map->player.dir_y = old_dir_x * sin(map->player.rotate_speed) +
		map->player.dir_y * cos(map->player.rotate_speed);
		old_plane_x = map->player.plane_x;
		map->player.plane_x = map->player.plane_x *
		cos(map->player.rotate_speed) - map->player.plane_y *
		sin(map->player.rotate_speed);
		map->player.plane_y = old_plane_x * sin(map->player.rotate_speed) +
		map->player.plane_y * cos(map->player.rotate_speed);
	}
}
