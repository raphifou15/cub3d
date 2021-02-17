/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_data2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 13:06:18 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/12 21:20:34 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_stock_data2(t_map *map)
{
	map->data = map->img_sp->data;
	map->size_line = map->img_sp->size_line;
	map->addr = (int *)map->img_sp->data;
}
