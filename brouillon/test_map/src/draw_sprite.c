/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_sprite.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 22:16:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/02 15:54:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_sprite(t_map *map, double rotation)
{
	t_list_sprite	*temp;
	int				i = -1;

	rotation = ft_new_rotation_angle(rotation);
	ft_distance_sprite_player(&map->ls_sprite, map);
	temp = map->ls_sprite;
	while (temp)
	{
		temp->hx = temp->x - map->player.x;
		temp->hy = temp->y - map->player.y;
		i++;
		
		//if (temp->hy < 0)
		//	temp->hy *= -1;
		//if (temp->hx < 0)
		//	temp->hx *= -1;
		temp->p = atan2(-temp->hy, temp->hx) * (180 / M_PI);
		rotation *= (180 / M_PI);
		//temp->p += M_PI;
		//if (temp->p < 0)
		//	temp->p += (2 * M_PI);
		//temp->q = rotation + ((M_PI / 180) * 30) - temp->p;
		//if (temp->p > M_PI + (M_PI / 2) && rotation < M_PI)
		//	temp->q = rotation + ((M_PI / 180) * 30) - temp->p + (M_PI * 2);
		//if (rotation > M_PI + (M_PI / 2) && temp->p < M_PI)
		//	temp->q = rotation + ((M_PI / 180) * 30) - temp->p - (M_PI * 2);
		//temp->screen_x = (long)(temp->q * (map->res_y / map->player.fov_angle));

		if (temp->p < 0)
			temp->p += 360;
		temp->q = rotation + 30 - temp->p;
		temp->screen_x = (long)(temp->q * (map->res_y / 60));
		temp->screen_y = map->res_x / 2;

		printf("%f\n", temp->screen_x / 64);
		printf("i = %d\n", i);
		printf("temp->hx = %d\n", temp->hx);
		printf("temp->hy = %d\n", temp->hy);
		printf("temp->p = %f\n", temp->p);
		printf("temp->q = %f\n", temp->q);
		printf("rotation = %f\n", rotation);
		printf("map->point.wall_x = %f\n", map->point.wall_x);
		printf("temp->screen_x = %f\n", temp->screen_x);
		//printf("temp->q = %f\n", temp->q);
		temp = temp->next;
	}
}
