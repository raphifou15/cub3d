/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_texture.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 22:55:56 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 23:01:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_texture(t_map *map)
{
	int	g;

	map->img_s = NULL;
	map->img_n = NULL;
	map->img_w = NULL;
	map->img_e = NULL;
	map->img_sp = NULL;
	map->img_sp = mlx_xpm_file_to_image(map->mlx.mlx, map->sprite_text, &g, &g);
}
