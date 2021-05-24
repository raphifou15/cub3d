/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:01:37 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/20 18:44:52 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	key_pressed(int keycode, t_map *map)
{
	if (keycode == 65363)
		map->player.rotation_angle += (5 * (1 * (M_PI / 180)));
	if (keycode == 65361)
		map->player.rotation_angle -= (5 * (1 * (M_PI / 180)));
	if (keycode == 97)
		ft_check_player_play_forward(map, map->player.rotation_angle);
	if (keycode == 119)
		ft_check_player_play_back(map, map->player.rotation_angle);
	if (keycode == 115)
		ft_check_player_play_left(map, map->player.rotation_angle);
	if (keycode == 100)
		ft_check_player_play_right(map, map->player.rotation_angle);
	return (0);
}
