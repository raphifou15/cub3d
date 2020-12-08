/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:18:39 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 17:32:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	main(int argc, char **argv)
{
	t_map	*map;
	int		i;

	i = -1;
	if ((argc < 2 || argc > 3) && ft_error(0) == 0)
		return (0);
	if (ft_control_file(argv[1], ".cub") == 1 && ft_error(1) == 0)
		return (0);
	if (argc > 2 && ft_strcmp(argv[2], "--save") != 0 && ft_error(2) == 0)
		return (0);
	if ((map = map_init()) == NULL && ft_error(3) == 0)
		return (0);
	if (ft_check_map_and_recup(map, argv[1]) == 1 && ft_check_malloc(map) == 0)
		return (0);
	printf("%d %d\n%s\n", map->res_x, map->res_y, map->north_text);
	printf("%s\n%s\n", map->south_text, map->west_text);
	printf("%s\n%s\n", map->east_text, map->sprite_text);
	printf("%d\n%d\n%s", map->f_color, map->c_color, map->first_map);
	printf("salut à tous\n");
	while (map->map[++i])
		printf("%s\n", map->map[i]);
	printf("%d\n", map->line_map);
	ft_check_malloc(map);
	return (0);
}
