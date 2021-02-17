/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_global_save.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:23:27 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 17:28:05 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_global_save(t_map *map)
{
	next_frame(map);
	ft_save(map);
	free_img_text(map);
	ft_sprite_clear(map->sprite);
	mlx_destroy_image(map->mlx.mlx, map->mlx.img);
	mlx_destroy_display(map->mlx.mlx);
	free(map->mlx.mlx);
}
