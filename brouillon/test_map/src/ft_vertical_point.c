/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vertical_point.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 21:49:25 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 10:34:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_vertical_point(t_map *map, double rotation)
{
	long	x;
	long	y;

	x = map->point.vx_inter / map->player.brick;
	y = map->point.vy_inter / map->player.brick;
	if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
		--x;
	if (map->map[y][x] == '2')
	{
		//ft_touch_sprite(&map->ls_sprite, y, x);
		//map->count++;
		//map->point.wall_x2 = map->point.vx_inter;
		//map->point.wall_y2 = map->point.vy_inter;
		//map->point.vx2 = map->point.wall_x2;
		//map->point.vy2 = map->point.wall_y2;
		//map->point.wall_x3 = (map->point.vx_inter);
		//map->point.wall_y3 = (map->point.vy_inter);
		//map->r = 1;
	}
	if (map->map[y][x] == '1')
	{
		map->point.wall_x = map->point.vx_inter;
		map->point.wall_y = map->point.vy_inter;
		return (1);
	}
	else
	{
		map->point.vx_inter += map->point.vx_step;
		map->point.vy_inter += map->point.vy_step;
	}
	return (0);
}
