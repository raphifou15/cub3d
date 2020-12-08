/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_text_sprite.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:32:41 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/04 13:44:10 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_text_sprite(t_map *map, char *line, int i)
{
	char	*line2;
	int		fd;

	if (map->sprite_text != NULL && ft_free(line) == NULL)
		return (ft_error3(29) + 1);
	line2 = NULL;
	while (line[++i] == ' ')
		;
	i += 2;
	while (line[i] == ' ')
		i++;
	if (ft_check_line2(line + i) == 1 && ft_free(line) == NULL)
		return (ft_error3(30) + 1);
	if (((line2 = ft_modif_strcpy(line + i)) == NULL) && ft_free(line) == NULL)
		return (ft_error3(31) + 1);
	map->sprite_text = line2;
	if ((fd = open(map->sprite_text, O_RDONLY)) == -1 && ft_free(line) == NULL)
		return (ft_error3(32) + 1);
	if (close(fd) == -1 && ft_free(line) == NULL)
		return (ft_error3(33) + 1);
	return (0);
}
