/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fov.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 21:05:50 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 16:32:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_fov(t_map *map, double rotation)
{
	int		i;
	long	dpp;
	long	wsh;
	double	y2;
	double	x2;

	//double	x_inc;
	//double	y_inc;
	//double angle_sprite_player;
	//double rotation2;

	x2 = -1;
	y2 = -1;
	//rotation2 = ft_new_rotation_angle(map->player.rotation_angle);
	i = -1;
	map->o = -1;;
	rotation = (rotation - (map->player.fov_angle / 2));
	while (++i < map->player.numb_rays)
	{
		map->r = 0;
		ft_find_point(map, map->player.x, map->player.y, rotation);
		ft_point_wall(map, rotation);
		map->point.distance = ft_distance(map, rotation, 1);
		dpp = (map->res_x / 2) / tan(map->player.fov_angle / 2);
		wsh = (map->player.brick / (double)map->point.distance) * dpp;
		init_rect(map, wsh, i, 1);
		draw_ceil_floor(map->rec, map);
		draw_rectangle(map->rec, map, rotation, 1);
		/*if (map->r == 1)
		{
			if (map->o == -1)
				map->o = i;
			map->point.distance = ft_distance(map, rotation, 2);
			dpp = (map->res_x / 2) / tan(map->player.fov_angle / 2);
			wsh = (map->player.brick / (double)map->point.distance) * dpp;
			x_inc = map->point.wall_x2 - map->player.x;
			y_inc = map->point.wall_y2 - map->player.y;
			angle_sprite_player = atan2(y_inc, x_inc);
			angle_sprite_player += (angle_sprite_player < 0) ? (2 * M_PI) : 0; 
			printf("x = %f\n", x_inc);
			printf("y = %f\n", y_inc);
			printf("angle_sprite_player = %f\n", angle_sprite_player);
			printf("rotation2 = %f\n", rotation2);
			y2 = rotation2 + M_PI_4 - angle_sprite_player;
			if (angle_sprite_player > M_PI + M_PI_2 && rotation2 < M_PI_2)
				y2 = rotation2 + M_PI_4 - angle_sprite_player + (M_PI * 2);
			if (rotation2 > M_PI + M_PI_2 && angle_sprite_player < M_PI_2)
				y2 = rotation2 + M_PI_4 - angle_sprite_player - (M_PI * 2);
			printf("y2 = %f\n", y2);
			x2 = y2 * map->res_x / M_PI_2;
			printf("map->point.wall_x2 = %f\n", map->point.wall_x2);
			printf("x2 = %f\n", x2);
			init_rect(map, wsh, i, 2);
			draw_rectangle(map->rec, map, rotation, 2);
		}*/
		rotation += map->player.fov_angle / map->player.numb_rays;
	}
}
