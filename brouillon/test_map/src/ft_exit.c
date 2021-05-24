/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 00:51:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/28 19:28:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_exit(t_map *map)
{
	free_img_text(map);
	ft_list_clear(map->ls_sprite, ft_free);
	mlx_destroy_window(map->mlx.mlx, map->mlx.win);
	free(map->mlx.mlx);
	ft_check_malloc(map);
	exit(0);
}
