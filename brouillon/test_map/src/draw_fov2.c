/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fov2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:12:33 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 10:45:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_fov2(t_map *map, double rotation)
{
	long	dpp;
	long	wsh;
	long	i;
	long	y;
	long	x;
	
	x = 0;
	y = -1;
	map->div = map->count / 64;
	map->mod = map->count % 64;
	i = -1;
	map->z = 0;
	rotation = (rotation - (map->player.fov_angle / 2));
	//printf("rotation = %f", rotation);
	while (++i < map->o)
		rotation += map->player.fov_angle / map->player.numb_rays;
	i = -1;
	while (++i < map->count)
	{
		if (++y < map->div - 1)
			;
		else
		{
			y = (--map->mod >= 0) ? -2 : -1;
			++x;
			map->z = x * 4;
			//printf("map->z = %ld\n", map->z);
		}
		
		map->point.distance = ft_distance(map, rotation, 2);
		dpp = (map->res_x / 2) / tan(map->player.fov_angle / 2);
		wsh = (map->player.brick / (double)map->point.distance) * dpp;
		//printf("first wsh = %ld\n", wsh);
		wsh = (dpp / (double)map->point.distance) * map->player.brick ;
		//printf("second wsh = %ld\n", wsh);
		init_rect(map, wsh, map->o, 1);
		draw_rectangle(map->rec, map, rotation, 2);
		map->o++;
		map->point.wall_y2 += map->point.wall_y4;
		map->point.wall_x2 += map->point.wall_x4;
		printf("atan(map->point.wall_x2) = %f\n", atan(map->point.wall_x2));
		printf("atan(map->point.wall_y2, map->point.wall_x2) = %f\n", atan2(map->point.wall_y2, map->point.wall_x2));
		rotation += map->player.fov_angle / map->player.numb_rays;
	}
	/*printf("map->z = %ld\n", map->z);
	printf("i = %ld\n", i);
	printf("map->mod = %ld\n", map->mod);
	printf("map->div = %ld\n", map->div);
	printf("map->img_sp->size_line = %d\n", map->img_sp->size_line);
	printf("map->point.distance = %ld\n", map->point.distance);
	printf("dpp = %ld\n", dpp);*/
}
