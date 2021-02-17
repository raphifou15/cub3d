/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_square_mlx.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:51:20 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 18:11:37 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	display_square_mlx(t_map *map, int y, int x)
{
	if (map->map[y][x] == 'W' || map->map[y][x] == 'S' ||
	map->map[y][x] == 'N' || map->map[y][x] == 'E')
	{
		map->player.pos_x = x + 0.5;
		map->player.pos_y = y + 0.5;
		map->map[y][x] = '0';
	}
	if (map->map[y][x] == '2')
	{
		map->nbr_sprites += 1;
		if (ft_list_push_front(&map->sprite, x, y) == -1)
		{
			ft_error5(52);
			ft_exit(map);
		}
	}
}
