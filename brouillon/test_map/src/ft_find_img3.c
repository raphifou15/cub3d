/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_img3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 00:25:43 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/25 01:37:20 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_find_img3(t_map *map, long z, t_img *img1, t_img *img2)
{
	long	temp;

	temp = map->point.wall_x;
	if (z == ((temp % map->player.brick) * 4))
	{
		if (z == 0 && map->point.vx_inter == map->point.wall_x)
			return (ft_find_img2(map, img1));
		return (ft_find_img2(map, img2));
	}
	else
		return (ft_find_img2(map, img1));
}
