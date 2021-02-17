/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_img_text.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:39:09 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/21 00:41:28 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	free_img_text(t_map *map)
{
	mlx_destroy_image(map->mlx.mlx, map->img_s);
	mlx_destroy_image(map->mlx.mlx, map->img_n);
	mlx_destroy_image(map->mlx.mlx, map->img_w);
	mlx_destroy_image(map->mlx.mlx, map->img_e);
	mlx_destroy_image(map->mlx.mlx, map->img_sp);
	return (0);
}
