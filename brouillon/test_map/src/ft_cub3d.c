/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cub3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:01:34 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 18:38:29 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_cub3d(t_map *map)
{
	if ((map->mlx.mlx = mlx_init()) == NULL)
		return (ft_error5(48));
	if (init_texture(map) == 1 && ft_free(map->mlx.mlx) == NULL)
		return (ft_error5(49));
	if ((map->mlx.win = mlx_new_window(map->mlx.mlx, map->res_x, map->res_y,
		"cub3d")) == NULL && ft_free(map->mlx.mlx) == NULL &&
		free_img_text(map) == 0)
		return (ft_error5(50));
	init_player(map);
	ft_recup_first_player_sprite(map);
	mlx_hook(map->mlx.win, 2, 1L << 0, key_pressed, map);
	mlx_hook(map->mlx.win, 3, 1L << 1, key_release, map);
	mlx_hook(map->mlx.win, 33, 1L << 17, ft_exit, map);
	mlx_loop_hook(map->mlx.mlx, next_frame, map);
	mlx_loop(map->mlx.mlx);
	mlx_destroy_window(map->mlx.mlx, map->mlx.win);
	free(map->mlx.mlx);
}
