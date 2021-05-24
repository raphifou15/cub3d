/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_frame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:14:16 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/29 16:58:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	next_frame(t_map *map)
{
	//int	x;
	int	y;

	y = -1;
	if ((map->mlx.img = mlx_new_image(map->mlx.mlx, map->res_x, map->res_y))
		== NULL)
	{
		free_img_text(map);
		mlx_destroy_window(map->mlx.mlx, map->mlx.win);
		free(map->mlx.mlx);
		ft_check_malloc(map);
		ft_error5(51);
		exit(0);
	}
	/*while (map->map[++y])
	{
		x = -1;
		while (map->map[y][++x])
			display_square_mlx(map, y, x, map->player.brick);
	}*/
	map->count = -1;
	map->point.wall_x2 = -1;
	map->point.wall_y2 = -1;
	map->point.wall_x3 = -1;
	map->point.wall_y3 = -1;
	map->z = 0;
	map->i = -1;
	draw_fov(map, map->player.rotation_angle);
	map->point.wall_y4 = map->point.wall_y3 - map->point.wall_y2;
	map->point.wall_x4 = map->point.wall_x3 - map->point.wall_x2;
	map->point.wall_y4 /= map->count;
	map->point.wall_x4 /= map->count;

	/*printf("map->point.wall_x4 = %f\n", map->point.wall_x4);
	printf("map->point.wall_y4 = %f\n", map->point.wall_y4);
	printf("map->count = %d\n", map->count);
	printf("map->point.vx2 = %f\n", map->point.vx2);
	printf("map->point.vy2 = %f\n", map->point.vy2);
	printf("map->point.wall_x2 = %f\n", map->point.wall_x2);
	printf("map->point.wall_y2 = %f\n", map->point.wall_y2);
	printf("map->point.wall_x3 = %f\n", map->point.wall_x3);
	printf("map->point.wall_y3 = %f\n", map->point.wall_y3);*/
	//if (map->point.wall_x2 != -1)
	//	draw_fov2(map, map->player.rotation_angle);
	draw_sprite(map, map->player.rotation_angle);
	ft_touch_0(&map->ls_sprite);
	mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->mlx.img, 0, 0);
	mlx_destroy_image(map->mlx.mlx, map->mlx.img);
	return (0);
}
