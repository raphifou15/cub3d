/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance_sprite_player.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:46:25 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 22:18:01 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_distance_sprite_player(t_list_sprite **begin_list, t_map *map)
{
	t_list_sprite	*temp;
	int				i;


	temp = *begin_list;
	i = -1;
	while (temp)
	{
		i++;
		temp->distance = sqrt(((temp->x - map->player.x) *
		(temp->x - map->player.x)) + ((temp->y - map->player.y) *
		(temp->y - map->player.y)));
		temp = temp->next;
	}
	ft_list_sort(begin_list);
	temp = *begin_list;
	//printf("temp->distance = %f\n", temp->distance);
	//printf("temp->next->distance = %f\n", temp->next->distance);
}

	/*
		temp->hx = (temp->x * map->player.brick) + (map->player.brick / 2)
		- map->player.x;
		temp->hy = (temp->y * map->player.brick) + (map->player.brick / 2)
		- map->player.y;
		temp->screen_y = (map->res_x / 2);
		printf("temp->hx = %d\n", temp->hx);
		printf("temp->hy = %d\n", temp->hy);
		temp->p = atan2(temp->hy, temp->hx);
		//temp->p = temp->p * (180/ M_PI);
		if (temp->p < 0)
			temp->p += 2 * M_PI;
		if (temp->p > (2 * M_PI))
			temp->p -= (2 * M_PI);
		printf("rotation = %f\n", rotation);
		printf("temp->p = %f\n", temp->p);
		temp->inc1 = ((temp->p * map->res_y) / 60);
		printf("temp->inc1 = %f\n", temp->inc1);
		temp->inc2 = rotation + (map->player.fov_angle / 2);
		temp->q = temp->inc2 - temp->p;
		if ((rotation > 0 && rotation < M_PI_2) && temp->q < 0 &&
		temp->q > -M_PI_2)
			temp->q += (2 * M_PI);
		if (rotation < M_PI * 2 && rotation > M_PI + M_PI_2)
			temp->q -= (2 * M_PI);
		temp->screen_x = ((temp->q * (180 / M_PI)) * (map->res_y / 60));


		temp->distance = sqrt((temp->hx - map->player.x) *
		(temp->hx - map->player.x) + (temp->hy - map->player.y) *
		(temp->hy - map->player.y));
		temp->distance = temp->distance * cos(rotation - map->player.rotation_angle);
		temp->sprite_heigth = (temp->screen_x * 64) / temp->distance;
		printf("temp->sprite_heigth = %f\n", temp->sprite_heigth);
		printf("temp->distance = %f\n", temp->distance);
		printf("temp->q = %f\n", temp->q);
		printf("temp->inc2 = %f\n", temp->inc2);
		printf("temp->screen_y = %f\n", temp->screen_y);
		printf("temp->screen_x = %f\n", temp->screen_x);*/

