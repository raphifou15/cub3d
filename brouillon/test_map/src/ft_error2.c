/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:48:26 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/04 10:31:16 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_error2(int err)
{
	if (err == 12)
		ft_putstr("Error\nClose raté dans texture_north\n");
	if (err == 13)
		ft_putstr("Error\nTrop d'utilisation texture south dans la carte\n");
	if (err == 14)
		ft_putstr("Error\nMalloc a échoué dans texture south recup\n");
	if (err == 15)
		ft_putstr("Error\nOpen a échoué texture sud mauvais fichier\n");
	if (err == 16)
		ft_putstr("Error\nClose a échoué dans texture south recup\n");
	if (err == 17)
		ft_putstr("Error\nMauvais élément entrée dans texture north\n");
	if (err == 18)
		ft_putstr("Error\nMauvais élément entrée dans texture south\n");
	if (err == 19)
		ft_putstr("Error\nTrop d'utilisation texture west dans la carte\n");
	if (err == 20)
		ft_putstr("Error\nMauvais élément entrée dans texture west\n");
	if (err == 21)
		ft_putstr("Error\nMalloc a échoué dans texture west recup\n");
	if (err == 22)
		ft_putstr("Error\nOpen a échoué dans texture west mauvais fichier\n");
	if (err == 23)
		ft_putstr("Error\nClose a échoué dans texture west recup\n");
	return (0);
}
