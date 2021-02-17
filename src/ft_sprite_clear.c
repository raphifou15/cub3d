/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sprite_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:45:44 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/10 16:49:08 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_sprite_clear(t_sprite *sprite)
{
	t_sprite	*temp;

	temp = NULL;
	while (sprite)
	{
		temp = sprite;
		sprite = sprite->next;
		ft_free(temp);
	}
}
