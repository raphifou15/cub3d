/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprite_distance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 18:12:07 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:37:02 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_sprite_distance(t_sprite *sprite, t_map *map)
{
	t_sprite	*temp;

	temp = sprite;
	while (temp)
	{
		temp->dist = ((map->player.pos_x - temp->pos_x) * (map->player.pos_x -
		temp->pos_x) + (map->player.pos_y - temp->pos_y) * (map->player.pos_y -
		temp->pos_y));
		temp = temp->next;
	}
}
