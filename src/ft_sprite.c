/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:59:49 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:39:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_sprite(t_map *map, double *z_buffer)
{
	t_sprite	*temp;

	ft_sprite_distance(map->sprite, map);
	ft_sprite_order(&map->sprite);
	ft_stock_data2(map);
	temp = map->sprite;
	while (temp)
	{
		ft_point_sprite(temp, map);
		--temp->draw_start_x;
		while (++temp->draw_start_x < temp->draw_end_x)
		{
			temp->tex_x = (int)(256 * (temp->draw_start_x - (-temp->sprite_width
			/ 2 + temp->sprite_screen_x)) * 64 / temp->sprite_width) / 256;
			if (temp->transform_y > 0 && temp->draw_start_x > 0 &&
			temp->draw_start_x < map->res_x && temp->transform_y <
			z_buffer[temp->draw_start_x])
				ft_draw_sprite(temp, map);
		}
		temp = temp->next;
	}
}
