/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cub3d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 21:01:34 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 17:51:47 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_cub3d(t_map *map)
{
	if ((map->mlx.mlx = mlx_init()) == NULL)
		return (ft_error5(48));
	if (init_texture(map) == 1 && ft_free(map->mlx.mlx) == NULL)
		return (ft_error5(49));
	mlx_get_screen_size(map->mlx.mlx, &map->screen_x, &map->screen_y);
	map->res_x = (map->res_x > map->screen_x) ? map->screen_x : map->res_x;
	map->res_y = (map->res_y > map->screen_y) ? map->screen_y : map->res_y;
	if (map->argc != 3)
		if ((map->mlx.win = mlx_new_window(map->mlx.mlx, map->res_x, map->res_y,
		"cub3d")) == NULL && ft_free(map->mlx.mlx) == NULL &&
		free_img_text(map) == 0)
			return (ft_error5(50));
	init_player(map);
	init_key(map);
	ft_cub3d2(map, -1, -1);
}
