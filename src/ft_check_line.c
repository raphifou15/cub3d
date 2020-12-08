/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:22:27 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/07 18:00:27 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_line(t_map *map, char *line)
{
	int	i;
	int	index;
	int	((*ptr[9])(t_map *map, char *line, int i));

	index = -1;
	i = -1;
	ft_init_ptr(ptr);
	while (line[++i] && line[i] == ' ')
		;
	index = ft_check_inside_line(line + i, map);
	if (index == -1 && ft_free(line) == NULL)
		return (ft_error4(40) + 1);
	if (index != 9)
		return (ptr[index](map, line, -1));
	return (0);
}
