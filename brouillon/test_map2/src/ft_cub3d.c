/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cub3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:01:34 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 22:54:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_cub3d(t_map *map)
{
	if ((map->mlx.mlx = mlx_init()) == NULL)
		return	;
	if ((map->mlx.win = mlx_new_window(map->mlx.mlx, map->res_x, map->res_y,
		"cub3d")) == NULL && ft_free(map->mlx.mlx) == NULL)
		return ;
	init_texture(map);
	init_player(map);
	mlx_hook(map->mlx.win, 2, 1L<<0, key_pressed, map);
	mlx_hook(map->mlx.win, 3, 1L<<1, key_release, map);
	mlx_loop_hook(map->mlx.mlx, next_frame, map);
	mlx_loop(map->mlx.mlx);
	mlx_destroy_window(map->mlx.mlx, map->mlx.win);
	free(map->mlx.mlx);
}
