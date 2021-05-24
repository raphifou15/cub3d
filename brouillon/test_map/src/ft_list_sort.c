/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 19:21:26 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 22:03:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_list_sort(t_list_sprite **begin_list)
{
	t_list_sprite	*temp;

	temp = *begin_list;
	while (temp->next)
	{
		if (temp->next->distance > temp->distance)
		{
			ft_list_sort2(&temp);
			temp = *begin_list;
		}
		else
		temp = temp->next;
	}
}
