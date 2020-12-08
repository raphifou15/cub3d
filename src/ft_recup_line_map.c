/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_line_map.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 17:55:34 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/07 23:39:30 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_line_map(t_map *map, char *line, int i)
{
	char	*line2;

	line2 = NULL;
	line2 = ft_modif_strdup(line);
	while (line2[++i])
		;
	if (line2[i - 2] != '1' && ft_free(line2) == NULL && ft_free(line) == NULL)
		return (ft_error4(41) + 1);
	if (ft_check_line_map1(line2, map) == 1 && ft_free(line) == NULL)
		return (1);
	if (map->first_map == NULL)
		map->first_map = line2;
	else
	{
		map->first_map = ft_strjoin(map->first_map, line2);
		ft_free(line2);
	}
	map->line_map++;
	return (0);
}
