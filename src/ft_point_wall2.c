/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point_wall2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 17:55:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 16:12:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_point_wall2(t_map *map)
{
	double	wall_x;
	int		tex_x;

	if (map->point.side == 0)
		wall_x = map->player.pos_y + map->point.perp_wall_dist *
		map->ray.ray_dir_y;
	else
		wall_x = map->player.pos_x + map->point.perp_wall_dist *
		map->ray.ray_dir_x;
	wall_x -= floor((wall_x));
	tex_x = (int)(wall_x * (double)(map->text_width));
	if (map->point.side == 0 && map->ray.ray_dir_x > 0)
		tex_x = map->text_width - tex_x - 1;
	if (map->point.side == 1 && map->ray.ray_dir_y < 0)
		tex_x = map->text_width - tex_x - 1;
	map->point.tex_x = tex_x;
}
