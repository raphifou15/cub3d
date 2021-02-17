/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:16:45 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:55:09 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_save(t_map *map)
{
	int	*addr;
	int	fd;
	int	y;
	int	x;

	fd = open("img.bmp", O_TRUNC | O_WRONLY | O_CREAT, S_IWUSR | S_IRUSR |
			S_IWGRP | S_IRGRP | S_IWOTH | S_IROTH);
	if (fd == -1)
		return (ft_error5(53));
	ft_save2(map, fd);
	y = map->res_y;
	addr = (int *)map->mlx.img->data;
	while (--y >= 0)
	{
		x = -1;
		while (++x < map->res_x)
			write(fd, &addr[y * map->mlx.img->size_line / 4 + x], 4);
	}
	if (close(fd) == -1)
		return (ft_error5(54));
}
