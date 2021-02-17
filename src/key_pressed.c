/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:01:37 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/08 13:55:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	key_pressed(int keycode, t_map *map)
{
	if (keycode == 97)
		map->key.key_a = 1;
	if (keycode == 119)
		map->key.key_w = 1;
	if (keycode == 115)
		map->key.key_s = 1;
	if (keycode == 100)
		map->key.key_d = 1;
	if (keycode == 65361)
		map->key.key_left = 1;
	if (keycode == 65363)
		map->key.key_right = 1;
	if (keycode == 65307)
		ft_exit(map);
	return (0);
}
