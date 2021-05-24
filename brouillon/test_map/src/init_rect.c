/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:41:50 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 10:54:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_rect(t_map *map, long wsh, long i, int x)
{
	map->rec.x1 = i * 1;
	map->rec.y1 = (map->res_y / 2) - (wsh / 2);
	map->rec.x2 = 1;
	map->rec.y2 = (x == 1) ? wsh : map->rec.y1 - 64;
	//printf("map->rec.y2 = %ld\n", map->rec.y2);
	if (map->rec.y1 < 0 || map->rec.y1 > map->res_y)
		map->rec.y1 = 0;
	if (map->rec.y2 > map->res_y || map->rec.y2 < 0)
		map->rec.y2 = map->res_y;
	map->rec.line = -1;
	map->rec.y3 = map->rec.y2 + map->rec.y1;
	map->rec.x3 = map->rec.x1 + map->rec.x2;
}
