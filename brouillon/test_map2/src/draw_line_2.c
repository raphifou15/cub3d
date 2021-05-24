/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:38:27 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/31 02:17:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_line_2(t_map *map, int x, int y, double rotation_angle)
{
	double	x2;
	double	y2;
	double	x1;
	double	y1;
	int		z;
	double	z2;
	t_help	help;

	printf("rotation angle = %f\n", rotation_angle);
	z = rotation_angle / (M_PI * 2);
	if (rotation_angle >= 0)
		z2 = rotation_angle - (M_PI * 2 * z);
	else
		z2 = rotation_angle + (M_PI * 2 * z * -1) + (M_PI * 2);
	printf("z = %d\n", z);
	printf("z2 = %f\n", z2);
	y2 = (z2 <= M_PI) ? (y / 10) * 10 + 10 : (y / 10) * 10;
	x2 = x + round(((y2 - y) / tan(rotation_angle)));
	if (round(((y2 - y) / tan(rotation_angle)) > 10))
		x2 = x + 10;
	if (round(((y2 - y) / tan(rotation_angle)) < -10))
		x2 = x - 10;
	printf("x2 = %f, y2 = %f, y = %d\n\n", x2, y2, y);
	y1 = (y2 < y) ? y - 10 : y;
	help.x = (x2 < x) ? x : x + 10; 
	help.y = (y2 < y) ? y : y + 10; 
	while (y1 <= help.y)
	{
		x1 = (x2 < x) ? x - 10 : x;
		while (x1 <= help.x)
		{
			if((((x1 - x) * (y2 - y)) - ((y1 - y) * (x2 - x))) == 0)
				my_mlx_pixel_put(map->mlx.img, x1, y1, 0);
			x1++;
		}
		y1++;
	}
}
