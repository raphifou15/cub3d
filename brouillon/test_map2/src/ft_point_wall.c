/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:56:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/20 18:20:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point_wall(t_map *map, double rotation)
{
	int		i;
	double	vx;
	double	vy;
	double	hx;
	double	hy;
	long	x;
	long	y;
	//long	h;
	//long	v;
	//long	player;
	//long	distance1;
	//long	distance2;

	rotation = ft_new_rotation_angle(rotation);
	//printf("rotation %lf\n", rotation);
	//player = map->player.x + map->player.y;
	i = 0;
	while (i == 0)
	{
		vx = map->point.vx_inter - map->player.x;
		vy = map->point.vy_inter - map->player.y;
		hx = map->point.hx_inter - map->player.x;
		hy = map->point.hy_inter - map->player.y;
		vx *= (vx < 0) ? -1 : 1;
		vy *= (vy < 0) ? -1 : 1;
		hx *= (hx < 0) ? -1 : 1;
		hy *= (hy < 0) ? -1 : 1;
		if (vy < hy)
		{
			x = map->point.vx_inter / map->player.brick;
			y = map->point.vy_inter / map->player.brick;
			//printf("vy < hy\n");
			if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
				--x;
			/*printf("y = %ld, x = %ld\n", y, x);
			printf("map->point.vx_inter = %ld, ", map->point.vx_inter);
			printf("map->point.vy_inter = %ld\n", map->point.vy_inter);
			printf("map->point.hx_inter = %ld  ", map->point.hx_inter);
			printf("map->point.hy_inter = %ld\n", map->point.hy_inter);
			printf("map->player.y = %f\n", map->player.y);
			printf("hy , vy = %ld, %ld\n", hy, vy);*/
			if (map->map[y][x] == '1' || map->map[y][x] == '2')
			{
				map->color = (map->map[y][x] == '1') ? 255 : map->c_color;
				map->point.wall_x = map->point.vx_inter;
				map->point.wall_y = map->point.vy_inter;
				return ;
			}
			else
			{
				map->point.vx_inter += map->point.vx_step;
				map->point.vy_inter += map->point.vy_step;
			}
		}
		if (hy < vy)
		{
			x = map->point.hx_inter / map->player.brick;
			y = map->point.hy_inter / map->player.brick;
			//printf("hy < vy\n");
			if (rotation > M_PI)
				--y;
			/*printf("y = %ld, x = %ld\n", y, x);
			printf("map->point.hx_inter = %ld, ", map->point.hx_inter);
			printf("map->point.hy_inter = %ld\n, ", map->point.hy_inter);*/
			if (map->map[y][x] == '1' || map->map[y][x] == '2')
			{
				map->color = (map->map[y][x] == '1') ? 255 : map->c_color;
				map->point.wall_x = map->point.hx_inter;
				map->point.wall_y = map->point.hy_inter;
				return ;
			}
			else
			{
				map->point.hx_inter += map->point.hx_step;
				map->point.hy_inter += map->point.hy_step;
			}
		}
		if (hy == vy)
		{
			x = map->point.vx_inter / map->player.brick;
			y = map->point.vy_inter / map->player.brick;
			if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
				--x;
			if (rotation > M_PI)
				--y;
			if (map->map[y][x] == '1' || map->map[y][x] == '2')
			{
				map->color = (map->map[y][x] == '1') ? 255 : map->c_color;
				map->point.wall_x = map->point.vx_inter;
				map->point.wall_y = map->point.vy_inter;
				return ;
			}
			else
			{
				map->point.hx_inter += map->point.hx_step;
				map->point.hy_inter += map->point.hy_step;
				map->point.vx_inter += map->point.vx_step;
				map->point.vy_inter += map->point.vy_step;
			}
		}
	}
}

/*
			if (vx < hx)
			{
				x = map->point.vx_inter / 10;
				y = map->point.vy_inter / 10;
				printf("lala\n");
				printf("y = %ld, x = %ld\n", y, x);
				if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
					--x;
				if (map->map[y][x] == '1' || map->map[y][x] == '2')
				{
					map->point.wall_x = map->point.vx_inter;
					map->point.wall_y = map->point.vy_inter;
					return ;
				}
				else
				{
					map->point.vx_inter += map->point.vx_step;
					map->point.vy_inter += map->point.vy_step;
				}
			}
			if (hx < vx)
			{
				x = map->point.hx_inter / 10;
				y = map->point.hy_inter / 10;
				printf("else  y = %ld, x = %ld\n", y, x);
				printf("lala\n");
				if (rotation > M_PI)
					--y;
				if (map->map[y][x] == '1' || map->map[y][x] == '2')
				{
					map->point.wall_x = map->point.hx_inter;
					map->point.wall_y = map->point.hy_inter;
					return ;
				}
				else
				{
					map->point.hx_inter += map->point.hx_step;
					map->point.hy_inter += map->point.hy_step;
				}
			}
			if (hx == vx)
			{
				x = map->point.hx_inter / 10;
				y = map->point.hy_inter / 10;
				//printf("else ==  y = %ld, x = %ld\n", y, x);
				if (rotation > M_PI)
					--y;
				if (map->map[y][x] == '1' || map->map[y][x] == '2')
				{
					map->point.wall_x = map->point.hx_inter;
					map->point.wall_y = map->point.hy_inter;
					return ;
				}
				++y;
				if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
					--x;
				if (map->map[y][x] == '1' || map->map[y][x] == '2')
				{
					map->point.wall_x = map->point.hx_inter;
					map->point.wall_y = map->point.hy_inter;
					return ;
				}
				if (rotation > M_PI)
					--y;
				if (map->map[y][x] == '1' || map->map[y][x] == '2')
				{
					map->point.wall_x = map->point.hx_inter;
					map->point.wall_y = map->point.hy_inter;
					return ;
				}
				else
				{
					map->point.hx_inter += map->point.hx_step;
					map->point.hy_inter += map->point.hy_step;
					map->point.vx_inter += map->point.vx_step;
					map->point.vy_inter += map->point.vy_step;
				}
			}*/
	/*
	while (i == 0)
	{
		h = (map->point.hy_inter + map->point.hx_inter);
		v =  (map->point.vy_inter + map->point.vx_inter);
		distance1 = player - h;
		distance2 = player - v;
		distance1 *= (distance1 < 0) ? -1 : 1;
		distance2 *= (distance2 < 0) ? -1 : 1;
		if (map->point.hy_inter < 0 || map->point.hx_inter < 0)
			distance1 =	-1;
		if (map->point.vy_inter < 0 || map->point.vx_inter < 0)
			distance2 =	-1;
		if (distance1 == distance2 && distance1 >= 0 && distance2 >= 0)
		{
			printf("distance 1 = %ld distance 2 = %ld\n", distance1, distance2);
			printf("map->point.hx_inter = %ld, ", map->point.hx_inter);
			printf("map->point.hy_inter = %ld\n", map->point.hy_inter);
			printf("map->point.vx_inter = %ld, ", map->point.vx_inter);
			printf("map->point.vy_inter = %ld\n", map->point.vy_inter);
			x = map->point.hx_inter / 10;
			y = map->point.hy_inter / 10;
			if (rotation > M_PI)
				--y;
			if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
				--x;
			if (x < 0 || y < 0)
			{
				printf("x ou y est inférieur a 0");
				exit(1);
			}
			if (map->map[y][x] == '1' || map->map[y][x] == '2')
			{
				map->point.wall_x = map->point.hx_inter;
				map->point.wall_y = map->point.hy_inter;
				return ;
			}
			else
			{
				map->point.hx_inter += map->point.hx_step;
				map->point.hy_inter += map->point.hy_step;
				map->point.vx_inter += map->point.vx_step;
				map->point.vy_inter += map->point.vy_step;

			}		
		}
		if (distance1 >= 0 && (distance1 < distance2 || distance2 < 0))
		{
			printf("distance 1 = %ld distance 2 = %ld\n", distance1, distance2);
			x = map->point.hx_inter / 10;
			y = map->point.hy_inter / 10;
			if (rotation > M_PI)
				y--;
			if (x < 0 || y < 0)
			{
				printf("x ou y est inférieur a 0");
				exit(1);
			}
			if (map->map[y][x] == '1' || map->map[y][x] == '2')
			{
				map->point.wall_x = map->point.hx_inter;
				map->point.wall_y = map->point.hy_inter;
				return ;
			}
			else
			{
				map->point.hx_inter += map->point.hx_step;
				map->point.hy_inter += map->point.hy_step;
			}
		}	
		if (distance2 >= 0 && (distance1 > distance2 || distance1 < 0))
		{
			x = map->point.vx_inter / 10;
			y = map->point.vy_inter / 10;
			if (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2)
				--x;
			if (rotation > M_PI)
				;
			if (x < 0 || y < 0)
			{
				printf("x ou y est inférieur a 0");
				exit(1);
			}

			if (map->map[y][x] == '1' || map->map[y][x] == '2')
			{
				map->point.wall_x = map->point.vx_inter;
				map->point.wall_y = map->point.vy_inter;
				printf("lala");
				return ;
			}
			else
			{
				map->point.vx_inter += map->point.vx_step;
				map->point.vy_inter += map->point.vy_step;
			}
		}
	}
}
*/
