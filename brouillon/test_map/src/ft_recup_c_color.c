/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_c_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 09:43:23 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/06 09:52:16 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_c_color(t_map *map, char *line, int i)
{
	t_color	color;

	color = ft_init_color();
	if (map->c_color != -1 && ft_free(line) == NULL)
		return (ft_error4(38) + 1);
	while (line[++i] && line[i] == ' ')
		;
	while (line[++i] && line[i] == ' ')
		;
	color.r = ft_modif_atoi(line + i);
	while (line[i] > 47 && line[i] < 58)
		i++;
	if (line[i++] != ',' && ft_free(line) == NULL)
		return (ft_error4(39) + 1);
	color.g = ft_modif_atoi(line + i);
	while (line[i] > 47 && line[i] < 58)
		i++;
	if (line[i++] != ',' && ft_free(line) == NULL)
		return (ft_error4(39) + 1);
	color.b = (line[i] > 47 && line[i] < 58) ? ft_modif_atoi(line + i) : -1;
	while (line[i] > 47 && line[i] < 58)
		i++;
	while (line[i] && line[i] == ' ')
		i++;
	return (ft_recup_c_color2(map, color, line, i));
}
