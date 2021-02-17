/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_sprite.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 11:59:53 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/12 21:30:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_draw_sprite(t_sprite *sprite, t_map *map)
{
	int	d;
	int	y;
	int	x;
	int	z;

	y = sprite->draw_start_y - 1;
	while (++y < sprite->draw_end_y)
	{
		d = (y) * 256 - map->res_y * 128 + sprite->sprite_height * 128;
		sprite->tex_y = ((d * 64) / sprite->sprite_height) / 256;
		x = sprite->draw_start_x;
		z = (sprite->tex_x * 4 + sprite->tex_y * map->size_line);
		if (z <= map->size_line * 63 && z >= 0 && (int)(map->data[z]))
		{
			map->mlx.img->data[(x * 4) + (map->mlx.img->size_line * y)] =
			map->data[z];
			map->mlx.img->data[((x * 4) + (map->mlx.img->size_line * y)) + 1] =
			map->data[z + 1];
			map->mlx.img->data[((x * 4) + (map->mlx.img->size_line * y)) + 2] =
			map->data[z + 2];
			map->mlx.img->data[((x * 4) + (map->mlx.img->size_line * y)) + 3] =
			map->data[z + 3];
		}
	}
}
