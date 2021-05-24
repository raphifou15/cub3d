/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_player_play_back.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:59:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/23 20:51:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_check_player_play_back(t_map *map, double rotation)
{
	int	x;
	int	y;

	x = round(map->player.x - cos(rotation) * (map->player.brick / 2));
	y = round(map->player.y - sin(rotation) * (map->player.brick / 2));
	x /= map->player.brick;
	y /= map->player.brick;
	if (map->map[y][x] == '1' || map->map[y][x] == '2')
		return ;
	map->player.x = round(map->player.x - cos(rotation) *
	(map->player.brick / 2));
	map->player.y = round(map->player.y - sin(rotation) *
	(map->player.brick / 2));
}
