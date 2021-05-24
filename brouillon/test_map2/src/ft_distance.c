/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 14:22:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/14 19:12:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

long	ft_distance(t_map *map, double rotation)
{
	double	distance;

	rotation = ft_new_rotation_angle(rotation);
	distance = sqrt((map->point.wall_x - map->player.x) *
	(map->point.wall_x - map->player.x) + (map->point.wall_y - map->player.y) *
	(map->point.wall_y - map->player.y));
	distance = distance * cos(rotation - map->player.rotation_angle);
	//printf("rotation = %f\n", rotation);
	//printf("distance = %f\n", distance);
	//distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	return (distance);
}
