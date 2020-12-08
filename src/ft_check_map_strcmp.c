/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_strcmp.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:07:52 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 17:17:12 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_check_map_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i] && s2[i])
		;
	--i;
	j = i;
	while (s2[++i])
		if (s2[i] != '1')
			return (1);
	while (s1[++j])
		if (s1[j] != '1')
			return (1);
	return (0);
}
