/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:56:37 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/07 23:26:49 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

t_map	*map_init(void)
{
	t_map	*map;

	if ((map = malloc(sizeof(t_map))) == NULL)
		return (NULL);
	map->map = NULL;
	map->first_map = NULL;
	map->orientation = '0';
	map->line_map = 0;
	map->res_x = 0;
	map->res_y = 0;
	map->north_text = NULL;
	map->south_text = NULL;
	map->west_text = NULL;
	map->east_text = NULL;
	map->sprite_text = NULL;
	map->c_color = -1;
	map->f_color = -1;
	return (map);
}
