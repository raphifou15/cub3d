/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_point.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:25:27 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/21 19:58:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_find_point(t_map *map, long x, long y, double rotation)
{
	long	hy;
	long	vx;
	int		br;

	br = map->player.brick;
	rotation = ft_new_rotation_angle(rotation);
	hy = (rotation <= M_PI) ? (y / br) * br + br : (y / br) * br;
	map->point.hy_inter = hy;
	map->point.hx_inter = x + ((map->point.hy_inter - y) / tan(rotation));
	map->point.hy_step = (rotation <= M_PI) ? br : -br;
	map->point.hx_step = map->point.hy_step / tan(rotation);
	vx = (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2) ? (x / br) * br :
	((x / br) * br) + br;
	map->point.vx_inter = vx;
	map->point.vy_inter = y + (tan(rotation) * (map->point.vx_inter - x));
	map->point.vx_step = (rotation >= M_PI_2 && rotation <= M_PI + M_PI_2) ?
	-br : br;
	map->point.vy_step = tan(rotation) * map->point.vx_step;
}
