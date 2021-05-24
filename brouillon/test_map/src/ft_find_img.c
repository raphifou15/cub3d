/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 11:21:57 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/26 12:45:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_find_img(t_map *map, double rotation, long z, int x)
{
	if (x == 2)
	{
		map->addr = map->img_sp->data;
		map->size_line = map->img_sp->size_line;
		return ;
	}
	if (rotation <= M_PI_2)
		return (ft_find_img3(map, z, map->img_e, map->img_s));
	if (rotation <= M_PI)
		return (ft_find_img3(map, z, map->img_w, map->img_s));
	if (rotation <= M_PI + M_PI_2)
		return (ft_find_img3(map, z, map->img_w, map->img_n));
	if (rotation <= M_PI * 2)
		return (ft_find_img3(map, z, map->img_e, map->img_n));
}
