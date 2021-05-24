/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:10:18 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 13:42:58 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

char	**ft_split2(t_map *map, char c)
{
	char	**tab;
	int		i;
	int		j;

	j = -1;
	i = 0;
	tab = NULL;
	if ((tab = malloc(sizeof(char *) * (map->line_map + 1))) == NULL)
		return (NULL);
	while (++j < map->line_map)
	{
		if ((tab[j] = ft_put_in_tab(map->first_map + i, c)) == NULL)
		{
			ft_free2(tab, j);
			return (NULL);
		}
		while (map->first_map[i++] != c)
			;
	}
	tab[j] = NULL;
	return (tab);
}
