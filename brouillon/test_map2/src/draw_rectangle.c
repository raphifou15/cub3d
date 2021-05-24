/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:28:19 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/20 14:08:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	draw_rectangle(t_rect rec, t_map *map)
{
	long	y1;
	long	x2;
	long	y2;
	long	z;
	int		line;
	int		p;
	int		p1;
	int		p2;
	int		temp;
	//long	d;
	//int		gg;
	//t_img	*img2;

	//img2 = mlx_xpm_file_to_image(map->mlx.mlx, map->sprite_text, &gg, &gg);
	/*printf("img2->width = %d\n", img2->width);
	printf("img2->height = %d\n", img2->height);
	printf("img2->size_line = %d\n", img2->size_line);
	printf("map->mlx.img->size_line = %d\n", map->mlx.img->size_line);
	printf("map->mlx.img->size_width = %d\n", map->mlx.img->width);*/
	//printf("rec.x1 * rec.y1 * 4 = %ld\n", rec.x1 * rec.y1 * 4);
	y2 = rec.y2 + rec.y1;
	y1 = rec.y1;
	x2 = rec.x1 + rec.x2;
	z = (((map->point.wall_x / map->player.brick) * 4));
	line = -1;
	printf("rec.x1 = %ld\n", rec.x1);
	printf("map->point.wall_x = %ld\n", map->point.wall_x % 64);
	printf("map->img_sp->size_line = %d\n", map->img_sp->size_line);
	printf("map->img_sp->height = %d\n", map->img_sp->height);
	printf("y2 - rec.y1 = %ld\n", y2 - rec.y1);
	p = y2 - rec.y1;
	p1 = p / 64;
	p2 = p % 64;
	temp = -1;
	printf("p = %d et p1 = %d\n", p, p1);
	//printf("map->point.wall_y = %ld\n", map->point.wall_y / 64);
	while (rec.x1 < x2)
	{	
		if (map->point.wall_x == map->point.vx_inter)
			z = (map->point.wall_y % map->player.brick) * 4;
		else
			z = (map->point.wall_x % map->player.brick) * 4;
		rec.y1 = y1;
		while (rec.y1 < y2 )
		{
			while (++line < p1)
			{
				//my_mlx_pixel_put(map->mlx.img, rec.x1, rec.y1, map->color);
				//printf("(rec.x1 * 4) + map->mlx.img->size_line = %ld\n", (rec.x1 * 4) + (map->mlx.img->size_line * rec.y1));
				map->mlx.img->data[(rec.x1 * 4) + (map->mlx.img->size_line * rec.y1)] = map->img_sp->data[z];
				map->mlx.img->data[((rec.x1 * 4) + (map->mlx.img->size_line * rec.y1)) + 1] = map->img_sp->data[z + 1];
				map->mlx.img->data[((rec.x1 * 4) + (map->mlx.img->size_line * rec.y1)) + 2] = map->img_sp->data[z + 2];
				map->mlx.img->data[((rec.x1 * 4) + (map->mlx.img->size_line * rec.y1)) + 3] = map->img_sp->data[z + 3];
			rec.y1++;
			}
			z += map->img_sp->size_line;
			if (--p2 >= 0)
				line = -2;
			else
				line = -1;
		}
		line = -1;
		z = 0;
		rec.x1++;
	}
}
