/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_square_mlx_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 21:29:17 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 17:34:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	display_square_mlx_2(t_map *map, int y, int x, int size)
{
	if ((map->map[(y / size)][(x / size)] == 'W' ||
		map->map[(y / size)][(x / size)] == 'S' ||
		map->map[(y / size)][(x / size)] == 'N' ||
		map->map[(y / size)][(x / size)] == 'E') &&
		y % size == (size / 2) && x % size == (size / 2))
	{
		if (map->player.x == -1)
		{
			map->player.x = x;
			map->player.y = y;
		}
	}
}
