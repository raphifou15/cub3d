/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 16:48:32 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/26 20:44:50 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_map2(char **tab)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (tab[count][++i])
		if (tab[count][i] != '1')
			return (1);
	while (tab[++count + 1] != NULL)
		if (ft_check_map_strcmp(tab[count - 1], tab[count]) == 1)
			return (1);
	count = 0;
	while (tab[++count + 1] != NULL)
		if (ft_check_map_strcmp(tab[count], tab[count - 1]) == 1)
			return (1);
	i = -1;
	while (tab[count][++i])
		if (tab[count][i] != '1')
			return (1);
	return (0);
}
