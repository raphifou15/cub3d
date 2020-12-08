/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_text_west.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:19:52 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/04 10:55:02 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_text_west(t_map *map, char *line, int i)
{
	char	*line2;
	int		fd;

	if (map->west_text != NULL && ft_free(line) == NULL)
		return (ft_error2(19) + 1);
	line2 = NULL;
	while (line[++i] == ' ')
		;
	i += 2;
	while (line[i] == ' ')
		i++;
	if (ft_check_line2(line + i) == 1 && ft_free(line) == NULL)
		return (ft_error2(20) + 1);
	if (((line2 = ft_modif_strcpy(line + i)) == NULL) && ft_free(line) == NULL)
		return (ft_error2(21) + 1);
	map->west_text = line2;
	if ((fd = open(map->west_text, O_RDONLY)) == -1 && ft_free(line) == NULL)
		return (ft_error2(22) + 1);
	if (close(fd) == -1 && ft_free(line) == NULL)
		return (ft_error2(23) + 1);
	return (0);
}
