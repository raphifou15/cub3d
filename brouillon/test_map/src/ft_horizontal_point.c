/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_horizontal_point.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 22:17:35 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 10:35:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_horizontal_point(t_map *map, double rotation)
{
	long	x;
	long	y;

	x = map->point.hx_inter / map->player.brick;
	y = map->point.hy_inter / map->player.brick;
	if (rotation > M_PI)
		--y;
	if (map->map[y][x] == '2')
	{
		//ft_touch_sprite(&map->ls_sprite, y, x);
		//map->count++;
		//map->point.wall_x2 = map->point.hx_inter;
		//map->point.wall_y2 = map->point.hy_inter;
		//map->point.hx2 = map->point.wall_x2;
		//map->point.hy2 = map->point.wall_y2;
		//map->point.wall_x3 = (map->point.hx_inter);
		//map->point.wall_y3 = (map->point.hy_inter);
		//map->r = 1;
	}
	if (map->map[y][x] == '1')
	{
		map->point.wall_x = map->point.hx_inter;
		map->point.wall_y = map->point.hy_inter;
		return (1);
	}
	else
	{
		map->point.hx_inter += map->point.hx_step;
		map->point.hy_inter += map->point.hy_step;
	}
	return (0);
}
