/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_resolution.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:39:19 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/04 14:49:22 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_resolution(t_map *map, char *line, int i)
{
	if ((map->res_x != 0 || map->res_y != 0) && ft_free(line) == NULL)
		return (ft_error(6) + 1);
	while (line[++i] == ' ')
		;
	i++;
	map->res_x = ft_modif_atoi(line + i);
	while (line[i] == ' ')
		i++;
	while (line[i] > 47 && line[i] < 58)
		i++;
	if (line[i] != ' ' && ft_free(line) == NULL)
		return (ft_error(7) + 1);
	map->res_y = ft_modif_atoi(line + i);
	while (line[i] == ' ')
		i++;
	while (line[i] > 47 && line[i] < 58)
		i++;
	while (line[i] == ' ')
		i++;
	if (line[i] != '\0' && ft_free(line) == NULL)
		return (ft_error(7) + 1);
	if ((map->res_x < 150 || map->res_y < 100) && ft_free(line) == NULL)
		return (ft_error(8) + 1);
	return (0);
}
