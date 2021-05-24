/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_rect.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:41:50 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/14 17:36:00 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_rect(t_map *map, long wsh, long i)
{
	map->rec.x1 = i * 1;
	map->rec.y1 = (map->res_y / 2) - (wsh / 2);
	map->rec.x2 = 1;
	map->rec.y2 = wsh;
	if (map->rec.y1 < 0 || map->rec.y1 > map->res_y)
		map->rec.y1 = 0;
	if (map->rec.y2 > map->res_y || map->rec.y2 < 0)
		map->rec.y2 = map->res_y;
	/*printf("map->rec.x1 = %ld\n", map->rec.x1);
	printf("map->rec.y1 = %ld\n", map->rec.y1);
	printf("map->rec.x2 = %ld\n", map->rec.x2);
	printf("map->rec.y2 = %ld\n", map->rec.y2);
	*/
}
