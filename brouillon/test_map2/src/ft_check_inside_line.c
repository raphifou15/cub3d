/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_inside_line.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:45:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/07 17:56:48 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_inside_line(char *line, t_map *map)
{
	if (line[0] == '1')
		return (8);
	if (map->line_map != 0)
		return (-1);
	if (line[0] == 'R')
		return (0);
	if (line[0] == 'N' && line[1] == 'O')
		return (1);
	if (line[0] == 'S' && line[1] == 'O')
		return (2);
	if (line[0] == 'W' && line[1] == 'E')
		return (3);
	if (line[0] == 'E' && line[1] == 'A')
		return (4);
	if (line[0] == 'S')
		return (5);
	if (line[0] == 'F')
		return (6);
	if (line[0] == 'C')
		return (7);
	if (line[0] == '\0')
		return (9);
	return (-1);
}
