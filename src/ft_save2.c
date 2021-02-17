/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 15:42:14 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 15:59:17 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_save2(t_map *map, int fd)
{
	int	file_size;
	int	offset;
	int	size;
	int	nbr_plan;
	int	end;

	end = -1;
	nbr_plan = 1;
	offset = 58;
	file_size = (map->res_y * map->res_x * 4) + 58;
	size = 40;
	write(fd, "BM", 2);
	write(fd, &file_size, 4);
	write(fd, "\0\0\0\0", 4);
	write(fd, &offset, 4);
	write(fd, &size, 4);
	write(fd, &map->res_x, 4);
	write(fd, &map->res_y, 4);
	write(fd, &nbr_plan, 2);
	write(fd, &map->mlx.img->bpp, 2);
	while (++end < 28)
		write(fd, "\0", 1);
}
