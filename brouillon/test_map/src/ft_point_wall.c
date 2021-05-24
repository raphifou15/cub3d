/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:56:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/25 19:28:03 by rkhelif          ###   ########.fr       */
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
	
	map->point.vx2 = -1;
	map->point.vy2 = -1;
	map->point.hx2 = -1;
	map->point.hy2 = -1;
	rotation = ft_new_rotation_angle(rotation);
	i = 0;
	while (i == 0)
	{
		vx = ft_point_distance(map->point.vx_inter, map->player.x);
		vy = ft_point_distance(map->point.vy_inter, map->player.y);
		hx = ft_point_distance(map->point.hx_inter, map->player.x);
		hy = ft_point_distance(map->point.hy_inter, map->player.y);
		if (vy < hy)
			if (ft_vertical_point(map, rotation) == 1)
				return ;
		if (hy < vy)
			if (ft_horizontal_point(map, rotation) == 1)
				return ;
		if (hy == vy)
			if (ft_equal_point(map, rotation, 0, 0) == 1)
				return ;
	}
}
