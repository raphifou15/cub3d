/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 10:33:36 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:21:07 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point2(t_map *map)
{
	if (map->ray.ray_dir_x < 0)
	{
		map->point.step_x = -1;
		map->point.side_dist_x = (map->player.pos_x - map->point.map_x) *
		map->point.delta_dist_x;
	}
	else
	{
		map->point.step_x = 1;
		map->point.side_dist_x = (map->point.map_x + 1.0 - map->player.pos_x) *
		map->point.delta_dist_x;
	}
	if (map->ray.ray_dir_y < 0)
	{
		map->point.step_y = -1;
		map->point.side_dist_y = (map->player.pos_y - map->point.map_y) *
		map->point.delta_dist_y;
	}
	else
	{
		map->point.step_y = 1;
		map->point.side_dist_y = (map->point.map_y + 1.0 - map->player.pos_y) *
		map->point.delta_dist_y;
	}
}
