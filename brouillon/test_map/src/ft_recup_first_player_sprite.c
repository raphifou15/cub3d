/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_first_player_sprite.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 17:27:19 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 18:43:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_recup_first_player_sprite(t_map *map)
{
	int	x;
	int	y;

	map->ls_sprite = NULL;
	printf("map->ls_sprite = %s\n", (char *)map->ls_sprite);
	y = -1;
	while (map->map[++y])
	{
		x = -1;
		while (map->map[y][++x])
		{
			if (map->map[y][x] == '2')
				ft_list_push_back(&map->ls_sprite, y, x, map);
			display_square_mlx(map, y, x, map->player.brick);
		}
	}
}
