/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycasting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:41:23 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:28:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_raycasting(t_map *map)
{
	int		x;
	double	z_buffer[map->res_x];

	x = -1;
	while (++x < map->res_x)
	{
		ft_point(map, x);
		ft_wall_hit(map);
		ft_distance(map);
		ft_point_wall(map);
		ft_point_wall2(map);
		ft_stock_data(map);
		ft_draw_wall(map, x, 0, 0);
		ft_draw_ceil_floor(map, x);
		z_buffer[x] = map->point.perp_wall_dist;
	}
	if (map->nbr_sprites > 0)
		ft_sprite(map, z_buffer);
}
