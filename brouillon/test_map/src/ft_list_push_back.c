/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:44:05 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 18:42:31 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_list_push_back(t_list_sprite **begin_list, int y, int x, t_map *map)
{
	t_list_sprite	*new;
	t_list_sprite	*temp;

	new = NULL;
	new = ft_create_elem(y, x, map);
	if (*begin_list == NULL)
	{
		*begin_list = new;
		return ;
	}
	temp = *begin_list;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}
