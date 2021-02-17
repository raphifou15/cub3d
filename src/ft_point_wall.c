/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 21:28:19 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:04:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point_wall(t_map *map)
{
	int	line_height;

	line_height = (int)(map->res_y / map->point.perp_wall_dist);
	map->draw.draw_start = -line_height / 2 + map->res_y / 2;
	if (map->draw.draw_start < 0)
		map->draw.draw_start = 0;
	map->draw.draw_end = line_height / 2 + map->res_y / 2;
	if (map->draw.draw_end >= map->res_y || map->draw.draw_end < 0)
		map->draw.draw_end = map->res_y - 1;
}
