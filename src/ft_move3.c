/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:00:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/08 13:43:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_move3(t_map *map)
{
	double	old_dir_x;
	double	old_plane_x;

	if (map->key.key_right == 1)
	{
		old_dir_x = map->player.dir_x;
		map->player.dir_x = map->player.dir_x * cos(-map->player.rotate_speed) -
		map->player.dir_y * sin(-map->player.rotate_speed);
		map->player.dir_y = old_dir_x * sin(-map->player.rotate_speed) +
		map->player.dir_y * cos(-map->player.rotate_speed);
		old_plane_x = map->player.plane_x;
		map->player.plane_x = map->player.plane_x *
		cos(-map->player.rotate_speed) - map->player.plane_y *
		sin(-map->player.rotate_speed);
		map->player.plane_y = old_plane_x * sin(-map->player.rotate_speed) +
		map->player.plane_y * cos(-map->player.rotate_speed);
	}
	ft_move4(map);
}
