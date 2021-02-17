/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:54:08 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/16 23:24:09 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_modif_atoi(char *str)
{
	int	i;
	int	num;

	num = 0;
	i = -1;
	while (str[++i] == ' ')
		;
	--i;
	while (str[++i] > 47 && str[i] < 58)
	{
		num *= 10;
		num += (str[i] - 48);
		if (num * 10 > 2147483647)
			return (num);
	}
	return (num);
}
