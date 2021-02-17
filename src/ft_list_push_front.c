/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 15:46:24 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/10 17:39:04 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_list_push_front(t_sprite **sprite, int x, int y)
{
	t_sprite	*new_elem;

	new_elem = NULL;
	new_elem = ft_create_elem(x, y);
	if (new_elem == NULL)
		return (-1);
	new_elem->next = *sprite;
	*sprite = new_elem;
	return (0);
}
