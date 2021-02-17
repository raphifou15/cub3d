/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:55:17 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 17:13:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_distance(t_map *map)
{
	if (map->point.side == 0)
		map->point.perp_wall_dist = (map->point.map_x - map->player.pos_x +
		(1 - map->point.step_x) / 2) / map->ray.ray_dir_x;
	else
		map->point.perp_wall_dist = (map->point.map_y - map->player.pos_y +
		(1 - map->point.step_y) / 2) / map->ray.ray_dir_y;
}
