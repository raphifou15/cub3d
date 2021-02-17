/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_player2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:53:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:26:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_player2(t_map *map)
{
	if (map->orientation == 'N')
		map->player.dir_y = -1;
	if (map->orientation == 'N')
		map->player.plane_x = -0.66;
	if (map->orientation == 'S')
		map->player.dir_y = 1;
	if (map->orientation == 'S')
		map->player.plane_x = 0.66;
	if (map->orientation == 'E')
		map->player.dir_x = -1;
	if (map->orientation == 'E')
		map->player.plane_y = 0.66;
	if (map->orientation == 'W')
		map->player.dir_x = 1;
	if (map->orientation == 'W')
		map->player.plane_y = -0.66;
}
