/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_f_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:09:35 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/05 00:59:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_f_color(t_map *map, char *line, int i)
{
	t_color	color;

	color = ft_init_color();
	if (map->f_color != -1 && ft_free(line) == NULL)
		return (ft_error3(34) + 1);
	while (line[++i] && line[i] == ' ')
		;
	while (line[++i] && line[i] == ' ')
		;
	color.r = ft_modif_atoi(line + i);
	while (line[i] > 47 && line[i] < 58)
		i++;
	if (line[i++] != ',' && ft_free(line) == NULL)
		return (ft_error3(35) + 1);
	color.g = ft_modif_atoi(line + i);
	while (line[i] > 47 && line[i] < 58)
		i++;
	if (line[i++] != ',' && ft_free(line) == NULL)
		return (ft_error3(35) + 1);
	color.b = (line[i] > 47 && line[i] < 58) ? ft_modif_atoi(line + i) : -1;
	while (line[i] > 47 && line[i] < 58)
		i++;
	while (line[i] && line[i] == ' ')
		i++;
	return (ft_recup_f_color2(map, color, line, i));
}
