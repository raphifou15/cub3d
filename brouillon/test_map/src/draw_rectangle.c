/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:28:19 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/27 21:30:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_rectangle(t_rect rec, t_map *map, double rotation, int x)
{
	long	y1;
	long	z;
	int		p1;
	int		p2;

	y1 = rec.y1;
	p1 = (rec.y3 - rec.y1) / map->player.brick;
	p2 = (rec.y3 - rec.y1) % map->player.brick;
	map->rotation_line = ft_new_rotation_angle(rotation);
	z = ft_find_point_on_img(map, x);
	(x == 2) ? ft_find_img(map, map->rotation_line, z, x) :
		ft_find_img(map, map->rotation_line, z, x);
	map->display_0 = (x == 2) ? 2 : 1;
	/*if (x == 2)
		z = map->z;*/
	while (rec.x1 < rec.x3)
	{
		rec.y1 = y1;
		while (rec.y1 < rec.y3)
		{
			while (++rec.line < p1)
				rec.y1 = draw_rectangle_pixel_wall(map, rec.x1, rec.y1, z);
			z += map->size_line;
			rec.line = (--p2 >= 0) ? -2 : -1;
		}
		z = 0;
		rec.x1++;
	}
}
