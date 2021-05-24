/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:32:05 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/05 00:51:41 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

t_color	ft_init_color(void)
{
	t_color	color;

	color.t = 0;
	color.r = -1;
	color.g = -1;
	color.b = -1;
	return (color);
}
