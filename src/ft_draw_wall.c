/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_wall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 21:56:53 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 17:08:46 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_draw_wall(t_map *map, int x, int div, int mod)
{
	int	y;
	int	y2;
	int	size_draw;
	int	line;
	int	z;

	y = map->draw.draw_start;
	y2 = map->draw.draw_end;
	size_draw = y2 - y;
	div = size_draw / map->text_height;
	mod = size_draw % map->text_height;
	z = map->point.tex_x * 4;
	line = (div == 0) ? -2 : -1;
	while (y <= y2)
	{
		while (++line < div)
			y = ft_draw_wall2(map, x, y, z);
		z += map->size_line;
		line = (--mod >= 0) ? -2 : -1;
	}
}
