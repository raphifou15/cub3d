/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:51:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/02 14:42:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_player(t_map *map)
{
	map->player.x = -1;
	map->player.y = -1;
	map->player.rotation_angle = M_PI_2 + M_PI;
	map->player.fov_angle = 60 * (M_PI / 180);
	map->player.numb_rays = map->res_x;
	map->player.brick = 64;
}
