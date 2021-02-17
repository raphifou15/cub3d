/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:49:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:35:03 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_stock_data(t_map *map)
{
	if (map->point.side == 0 && map->ray.ray_dir_x < 0)
	{
		map->data = map->img_e->data;
		map->size_line = map->img_e->size_line;
	}
	if (map->point.side == 0 && map->ray.ray_dir_x >= 0)
	{
		map->data = map->img_w->data;
		map->size_line = map->img_w->size_line;
	}
	if (map->point.side == 1 && map->ray.ray_dir_y < 0)
	{
		map->data = map->img_n->data;
		map->size_line = map->img_n->size_line;
	}
	if (map->point.side == 1 && map->ray.ray_dir_y >= 0)
	{
		map->data = map->img_s->data;
		map->size_line = map->img_s->size_line;
	}
}
