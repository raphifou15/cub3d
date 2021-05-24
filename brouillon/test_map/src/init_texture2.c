/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 22:17:32 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/20 23:01:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	init_texture2(t_map *map)
{
	int	g;

	if ((map->img_e =
		mlx_xpm_file_to_image(map->mlx.mlx, map->east_text, &g, &g)) == NULL)
	{
		mlx_destroy_image(map->mlx.mlx, map->img_s);
		mlx_destroy_image(map->mlx.mlx, map->img_n);
		mlx_destroy_image(map->mlx.mlx, map->img_w);
		return (1);
	}
	if ((map->img_sp =
		mlx_xpm_file_to_image(map->mlx.mlx, map->sprite_text, &g, &g)) == NULL)
	{
		mlx_destroy_image(map->mlx.mlx, map->img_s);
		mlx_destroy_image(map->mlx.mlx, map->img_n);
		mlx_destroy_image(map->mlx.mlx, map->img_w);
		mlx_destroy_image(map->mlx.mlx, map->img_e);
		return (1);
	}
	return (0);
}
