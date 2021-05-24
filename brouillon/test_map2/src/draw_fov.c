/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fov.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 21:05:50 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 20:01:10 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_fov(t_map *map, double rotation)
{
	int		i;
	long	dpp;
	long	wsh;
	
	i = -1;
	rotation = (rotation - (map->player.fov_angle / 2));
	while (++i < map->player.numb_rays)
	{//while (++i < 1)
		ft_find_point(map, map->player.x, map->player.y, rotation);
		ft_point_wall(map, rotation);
		map->point.distance = ft_distance(map, rotation);
		//printf("map->point.distance = %ld\n", map->point.distance);
		dpp = (map->res_x / 2) / tan(map->player.fov_angle / 2);
		//(double)map->point.distance;
		wsh = (map->player.brick / (double)map->point.distance) * dpp;
		//printf("dpp = %ld\nwsh = %ld\n", dpp, wsh);
		init_rect(map, wsh, i);
		draw_rectangle(map->rec, map);
		//draw_line_2(map, map->player.x, map->player.y, rotation);
		//draw_line_3(map, map->player.x, map->player.y);
		rotation += map->player.fov_angle / map->player.numb_rays;
	}
}
