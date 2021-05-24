/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_text_south.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:59:40 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/03 23:52:26 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_text_south(t_map *map, char *line, int i)
{
	char	*line2;
	int		fd;

	if (map->south_text != NULL && ft_free(line) == NULL)
		return (ft_error2(13) + 1);
	line2 = NULL;
	while (line[++i] == ' ')
		;
	i += 2;
	while (line[i] == ' ')
		i++;
	if (ft_check_line2(line + i) == 1 && ft_free(line) == NULL)
		return (ft_error2(18) + 1);
	if (((line2 = ft_modif_strcpy(line + i)) == NULL) && ft_free(line) == NULL)
		return (ft_error2(14) + 1);
	map->south_text = line2;
	if ((fd = open(map->south_text, O_RDONLY)) == -1 && ft_free(line) == NULL)
		return (ft_error2(15) + 1);
	if (close(fd) == -1 && ft_free(line) == NULL)
		return (ft_error2(16) + 1);
	return (0);
}
