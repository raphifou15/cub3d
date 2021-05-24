/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:52:38 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/02 13:59:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_control_file(char *file, char *extention)
{
	int	size;

	size = -1;
	while (file[++size])
		;
	size -= 4;
	if (ft_strcmp(file + size, extention) != 0)
		return (1);
	return (0);
}
