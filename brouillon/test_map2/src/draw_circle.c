/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 20:07:15 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/20 20:38:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_circle(t_map *map, int x, int y, double ray)
{
	int	b_x;
	int	b_y;
	int	e_x;
	int	e_y;

	b_y = y - ray;
	e_x = x + ray;
	e_y = y + ray;
	while (b_y <= e_y)
	{
		b_x = x - ray;
		while (b_x <= e_x)
		{
			if ((sqrt((pow((b_x - x), 2) + pow((b_y - y), 2)))) <= ray)
				my_mlx_pixel_put(map->mlx.img, b_x, b_y, 0);
			b_x++;
		}
		b_y++;
	}
}
