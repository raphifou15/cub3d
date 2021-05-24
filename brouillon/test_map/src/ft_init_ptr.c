/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:10:17 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/06 17:44:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_init_ptr(int (**ptr)(t_map *map, char *line, int i))
{
	ptr[0] = ft_recup_resolution;
	ptr[1] = ft_recup_text_north;
	ptr[2] = ft_recup_text_south;
	ptr[3] = ft_recup_text_west;
	ptr[4] = ft_recup_text_east;
	ptr[5] = ft_recup_text_sprite;
	ptr[6] = ft_recup_f_color;
	ptr[7] = ft_recup_c_color;
	ptr[8] = ft_recup_line_map;
}
