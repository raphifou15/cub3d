/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recup_text_east.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:53:20 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/04 13:25:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_recup_text_east(t_map *map, char *line, int i)
{
	char	*line2;
	int		fd;

	if (map->east_text != NULL && ft_free(line) == NULL)
		return (ft_error3(24) + 1);
	line2 = NULL;
	while (line[++i] == ' ')
		;
	i += 2;
	while (line[i] == ' ')
		i++;
	if (ft_check_line2(line + i) == 1 && ft_free(line) == NULL)
		return (ft_error3(25) + 1);
	if (((line2 = ft_modif_strcpy(line + i)) == NULL) && ft_free(line) == NULL)
		return (ft_error3(26) + 1);
	map->east_text = line2;
	if ((fd = open(map->east_text, O_RDONLY)) == -1 && ft_free(line) == NULL)
		return (ft_error3(27) + 1);
	if (close(fd) == -1 && ft_free(line) == NULL)
		return (ft_error3(28) + 1);
	return (0);
}
