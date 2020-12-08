/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_line_map1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 22:51:12 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/07 23:43:06 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_line_map1(char *str, t_map *map)
{
	int	i;
	int	max;

	i = -1;
	while (str[++i])
		;
	max = i - 1;
	i = -1;
	while (str[++i] && i < max)
	{
		if (str[i] != '1' && str[i] != '0' && str[i] != 'N' && str[i] != 'S' &&
			str[i] != 'E' && str[i] != 'W' && str[i] != '2' &&
			ft_free(str) == NULL)
			return (ft_error4(42) + 1);
		if (str[i] == 'E' || str[i] == 'N' || str[i] == 'S' || str[i] == 'W')
		{
			if (map->orientation != '0' && ft_free(str) == NULL)
				return (ft_error4(43) + 1);
			map->orientation = str[i];
		}
	}
	return (0);
}
