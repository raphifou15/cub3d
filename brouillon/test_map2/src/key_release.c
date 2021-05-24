/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:34:57 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/26 21:38:10 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	key_release(int keycode, t_map *map)
{
	if (keycode == 65363)
		map->player.rotation_angle += 0;
	if (keycode == 65361)
		map->player.rotation_angle += 0;
	if (keycode == 97)
		map->player.rotation_angle += 0;
	if (keycode == 119)
		map->player.rotation_angle += 0;
	if (keycode == 115)
		map->player.rotation_angle += 0;
	if (keycode == 100)
		map->player.rotation_angle += 0;
	return (0);
}
