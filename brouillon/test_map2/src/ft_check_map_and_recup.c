/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_and_recup.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:24:52 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 09:53:39 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_map_and_recup(t_map *map, char *file)
{
	int		fd;
	char	*line;
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (ft_error(4) + 1);
	while ((ret = get_next_line(fd, &line)) > 0)
	{
		if (ft_check_line(map, line) == 1)
			return (1);
		free(line);
	}
	if (ret == -1)
		return (ft_error4(44) + 1);
	if (line != NULL)
		free(line);
	if (close(fd) == -1)
		return (ft_error(5) + 1);
	if (ft_finnish_check_split(map) == 1)
		return (1);
	return (0);
}
