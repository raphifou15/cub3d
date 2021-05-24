/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 15:41:42 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/02 23:14:18 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (str == NULL)
		return ;
	while (str[++i])
		write(1, &str[i], 1);
}