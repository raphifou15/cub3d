/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_img2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:05:19 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/24 13:17:16 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_find_img2(t_map *map, t_img *img)
{
	map->addr = img->data;
	map->size_line = img->size_line;
	return ;
}
