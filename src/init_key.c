/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_key.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 10:14:12 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/08 10:17:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	init_key(t_map *map)
{
	map->key.key_a = 0;
	map->key.key_w = 0;
	map->key.key_s = 0;
	map->key.key_d = 0;
	map->key.key_right = 0;
	map->key.key_left = 0;
}
