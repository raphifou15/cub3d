/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touch_0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:59:58 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/29 17:04:23 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_touch_0(t_list_sprite **begin_list)
{
	t_list_sprite	*temp;

	temp = *begin_list;
	while (temp)
	{
		temp->touch = 0;
		temp = temp->next;
	}
}
