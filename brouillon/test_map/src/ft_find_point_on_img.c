/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_point_on_img.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:35:26 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/26 12:47:36 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

long	ft_find_point_on_img(t_map *map, int x)
{
	long	z;
	long	temp;

	z = 0;
	if (x == 1)
	{
		if (map->point.wall_x == map->point.vx_inter)
		{
			temp = (x == 1) ? map->point.wall_y : map->point.wall_y2;
			z = ((temp % map->player.brick) * 4);
			return (z);
		}
		if (map->point.wall_y == map->point.hy_inter)
		{
			temp = (x == 1) ? map->point.wall_x : map->point.wall_x2;
			z = ((temp % map->player.brick) * 4);
		}
	}
	if (x != 1)
	{
		if (map->point.vx2 == map->point.wall_x2)
			temp = map->point.wall_y2;
		if (map->point.hy2 == map->point.wall_y2)
			temp = map->point.wall_x2;
		z = ((temp % map->player.brick) * 4);
	}
	return (z);
}
