/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:18:39 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/14 17:13:48 by rkhelif          ###   ########.fr       */
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
	map->argc = argc;
	ft_cub3d(map);
	ft_check_malloc(map);
	return (0);
}
