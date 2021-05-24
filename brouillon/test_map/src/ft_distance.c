/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:22:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/30 23:50:56 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

long	ft_distance(t_map *map, double rotation, int x)
{
	double	distance;

	rotation = ft_new_rotation_angle(rotation);
	if (x == 1)
	{
		distance = sqrt((map->point.wall_x - map->player.x) *
		(map->point.wall_x - map->player.x) + (map->point.wall_y -
		map->player.y) * (map->point.wall_y - map->player.y));
		distance = distance * cos(rotation - map->player.rotation_angle);
		//printf("distance = %f\n", distance);
		return (distance);
	}
	/*distance = sqrt((map->point.wall_x2 - map->player.x) *
	(map->point.wall_x2 - map->player.x) + (map->point.wall_y2 - map->player.y)
	* (map->point.wall_y2 - map->player.y));
	distance = distance * cos(rotation - map->player.rotation_angle);*/
	distance = sqrt((map->point.wall_x - map->player.x) * 
	(map->point.wall_x - map->player.x) + (map->point.wall_y - map->player.y) *
	(map->point.wall_y - map->player.y));
	distance = distance * cos(rotation - map->player.rotation_angle);
	return (distance);
}
