/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_wall2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:45:27 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:54:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_draw_wall2(t_map *map, int x, int y, int z)
{
	map->mlx.img->data[(x * 4) + (map->mlx.img->size_line * y)] = map->data[z];
	map->mlx.img->data[((x * 4) + (map->mlx.img->size_line * y)) + 1] =
	map->data[z + 1];
	map->mlx.img->data[((x * 4) + (map->mlx.img->size_line * y)) + 2] =
	map->data[z + 2];
	map->mlx.img->data[((x * 4) + (map->mlx.img->size_line * y)) + 3] =
	map->data[z + 3];
	y++;
	return (y);
}
