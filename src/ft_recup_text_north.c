/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_text_north.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:00:36 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/03 23:42:51 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_text_north(t_map *map, char *line, int i)
{
	char	*line2;
	int		fd;

	if (map->north_text != NULL && ft_free(line) == NULL)
		return (ft_error(10) + 1);
	line2 = NULL;
	while (line[++i] == ' ')
		;
	i += 2;
	while (line[i] == ' ')
		i++;
	if (ft_check_line2(line + i) == 1 && ft_free(line) == NULL)
		return (ft_error2(17) + 1);
	if (((line2 = ft_modif_strcpy(line + i)) == NULL) && ft_free(line) == NULL)
		return (ft_error(9) + 1);
	map->north_text = line2;
	if ((fd = open(map->north_text, O_RDONLY)) == -1 && ft_free(line) == NULL)
		return (ft_error(11) + 1);
	if (close(fd) == -1 && ft_free(line) == NULL)
		return (ft_error2(12) + 1);
	return (0);
}
