/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_malloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 14:56:10 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 13:39:30 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_malloc(t_map *map)
{
	if (map->first_map != NULL)
		ft_free(map->first_map);
	if (map->north_text != NULL)
		ft_free(map->north_text);
	if (map->south_text != NULL)
		ft_free(map->south_text);
	if (map->west_text != NULL)
		ft_free(map->west_text);
	if (map->east_text != NULL)
		ft_free(map->east_text);
	if (map->sprite_text != NULL)
		ft_free(map->sprite_text);
	if (map->map != NULL)
		ft_free2(map->map, map->line_map);
	if (map != NULL)
		ft_free(map);
	return (0);
}
