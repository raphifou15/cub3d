/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finnish_check_split.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:52:20 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 16:50:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_finnish_check_split(t_map *map)
{
	if (map->first_map == NULL || map->orientation == '0' || map->res_x == 0 ||
		map->res_y == 0 || map->north_text == NULL || map->south_text == NULL ||
		map->west_text == NULL || map->east_text == NULL ||
		map->sprite_text == NULL || map->c_color == -1 || map->f_color == -1)
		return (ft_error4(45) + 1);
	if ((map->map = ft_split2(map, '\n')) == NULL)
		return (ft_error4(46) + 1);
	if (ft_check_map2(map->map) == 1)
		return (ft_error4(47) + 1);
	return (0);
}
