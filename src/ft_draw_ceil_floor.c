/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_ceil_floor.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 09:37:59 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/09 09:47:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_draw_ceil_floor(t_map *map, int x)
{
	int	y;

	y = -1;
	while (++y < map->draw.draw_start)
		my_mlx_pixel_put(map->mlx.img, x, y, map->c_color);
	y = map->draw.draw_end - 1;
	while (++y <= map->res_y)
		my_mlx_pixel_put(map->mlx.img, x, y, map->f_color);
}
