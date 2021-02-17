/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cub3d2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:40:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 17:43:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_cub3d2(t_map *map, int y, int x)
{
	while (map->map[++y])
	{
		x = -1;
		while (map->map[y][++x])
			display_square_mlx(map, y, x);
	}
	if (map->argc == 3)
		return (ft_global_save(map));
	mlx_hook(map->mlx.win, 2, 1L << 0, key_pressed, map);
	mlx_hook(map->mlx.win, 3, 1L << 1, key_release, map);
	mlx_hook(map->mlx.win, 33, 1L << 17, &mlx_loop_end, map->mlx.mlx);
	mlx_loop_hook(map->mlx.mlx, next_frame, map);
	mlx_loop(map->mlx.mlx);
	free_img_text(map);
	ft_sprite_clear(map->sprite);
	mlx_destroy_window(map->mlx.mlx, map->mlx.win);
	mlx_destroy_display(map->mlx.mlx);
	free(map->mlx.mlx);
}
