/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:54:54 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 18:41:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

t_list_sprite	*ft_create_elem(int y, int x, t_map *map)
{
	t_list_sprite	*elem;

	elem = NULL;
	if ((elem = malloc(sizeof(*elem))) == NULL)
		return (NULL);
	elem->y = (y * map->player.brick) + (map->player.brick / 2);
	elem->x = (x * map->player.brick) + (map->player.brick / 2);
	elem->touch = 0;
	elem->next = NULL;
	return (elem);
}
