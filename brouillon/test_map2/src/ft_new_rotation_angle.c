/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_rotation_angle.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:33:18 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/19 20:00:40 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

double	ft_new_rotation_angle(double rotation)
{
	int	temp;

	temp = rotation / (M_PI * 2);
	if (rotation >= 0)
		rotation = rotation - (M_PI * 2 * temp);
	else
		rotation = rotation + (M_PI * 2 * temp * -1) + (M_PI * 2);
	return (rotation);
}
