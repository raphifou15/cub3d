/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_square_mlx.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 22:51:20 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 17:34:15 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	display_square_mlx(t_map *map, int y, int x, int size)
{
	int	size_x;
	int	size_y;

	
	y *= size;
	x *= size;
	size_x = x + size;
	size_y = y + size;
	while (y < size_y)
	{
		while (x < size_x)
		{
			display_square_mlx_2(map, y, x, size);
			x++;
		}
		x -= size;
		y++;
	}
}
