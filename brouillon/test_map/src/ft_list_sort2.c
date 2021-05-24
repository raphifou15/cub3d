/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 22:01:39 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 22:03:55 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_list_sort2(t_list_sprite **begin_list)
{
	double			x;
	double			y;
	double			distance;
	t_list_sprite	*temp;

	temp = *begin_list;
	x = temp->x;
	y = temp->y;
	distance = temp->distance;
	temp->x = temp->next->x;
	temp->y = temp->next->y;
	temp->distance = temp->next->distance;
	temp->next->x = x;
	temp->next->y = y;
	temp->next->distance = distance;
}
