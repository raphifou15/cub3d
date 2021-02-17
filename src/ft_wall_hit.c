/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall_hit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 12:06:59 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:33:09 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_wall_hit(t_map *map)
{
	while (map->point.hit == 0)
	{
		if (map->point.side_dist_x < map->point.side_dist_y)
		{
			map->point.side_dist_x += map->point.delta_dist_x;
			map->point.map_x += map->point.step_x;
			map->point.side = 0;
		}
		else
		{
			map->point.side_dist_y += map->point.delta_dist_y;
			map->point.map_y += map->point.step_y;
			map->point.side = 1;
		}
		if (map->map[map->point.map_y][map->point.map_x] == '1')
			map->point.hit = 1;
	}
}
