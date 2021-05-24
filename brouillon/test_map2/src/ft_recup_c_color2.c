/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_c_color2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 09:50:06 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/06 09:52:13 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_c_color2(t_map *map, t_color color, char *line, int i)
{
	if (line[i] != '\0' && ft_free(line) == NULL)
		return (ft_error3(35) + 1);
	if ((color.t != 0 || color.r > 255 || color.g > 255 || color.b > 255) &&
		ft_free(line) == NULL)
		return (ft_error4(36) + 1);
	if ((color.t != 0 || color.r < 0 || color.g < 0 || color.b < 0) &&
		ft_free(line) == NULL)
		return (ft_error4(37) + 1);
	map->c_color = (color.t << 24 | color.r << 16 | color.g << 8 | color.b);
	return (0);
}
