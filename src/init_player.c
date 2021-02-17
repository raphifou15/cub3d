/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:51:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:25:43 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_player(t_map *map)
{
	map->player.dir_x = 0;
	map->player.dir_y = 0;
	map->player.plane_x = 0;
	map->player.plane_y = 0;
	init_player2(map);
	map->player.move_speed = 0.05;
	map->player.rotate_speed = 0.02;
	map->text_width = 64;
	map->text_height = 64;
	map->nbr_sprites = 0;
	map->sprite = NULL;
}
