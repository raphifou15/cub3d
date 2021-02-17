/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_frame.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 10:14:16 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/14 15:34:21 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	next_frame(t_map *map)
{
	int	y;

	y = -1;
	if ((map->mlx.img = mlx_new_image(map->mlx.mlx, map->res_x, map->res_y))
		== NULL)
	{
		free_img_text(map);
		mlx_destroy_window(map->mlx.mlx, map->mlx.win);
		free(map->mlx.mlx);
		ft_check_malloc(map);
		ft_error5(51);
		exit(0);
	}
	ft_raycasting(map);
	ft_move(map);
	if (map->argc != 3)
	{
		mlx_put_image_to_window(map->mlx.mlx, map->mlx.win, map->mlx.img, 0, 0);
		mlx_destroy_image(map->mlx.mlx, map->mlx.img);
	}
	return (0);
}
