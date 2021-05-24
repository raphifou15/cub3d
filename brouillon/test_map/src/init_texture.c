/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 22:55:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/20 22:58:14 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	init_texture(t_map *map)
{
	int	g;

	if ((map->img_s =
		mlx_xpm_file_to_image(map->mlx.mlx, map->south_text, &g, &g)) == NULL)
		return (1);
	if ((map->img_n =
		mlx_xpm_file_to_image(map->mlx.mlx, map->north_text, &g, &g)) == NULL)
	{
		mlx_destroy_image(map->mlx.mlx, map->img_s);
		return (1);
	}
	if ((map->img_w =
		mlx_xpm_file_to_image(map->mlx.mlx, map->west_text, &g, &g)) == NULL)
	{
		mlx_destroy_image(map->mlx.mlx, map->img_s);
		mlx_destroy_image(map->mlx.mlx, map->img_n);
		return (1);
	}
	if (init_texture2(map) == 1)
		return (1);
	return (0);
}
