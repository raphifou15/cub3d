/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 10:45:15 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/04 17:41:24 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	ft_error3(int err)
{
	if (err == 24)
		ft_putstr("Error\nTrop d'utilisation texture east dans la carte\n");
	if (err == 25)
		ft_putstr("Error\nMauvais élément dans texture east\n");
	if (err == 26)
		ft_putstr("Error\nMalloc a échoué dans texture east recup\n");
	if (err == 27)
		ft_putstr("Error\nOpen a échoué dans texture east mauvais fichier\n");
	if (err == 28)
		ft_putstr("Error\nClose a échoué dans exture east recup\n");
	if (err == 29)
		ft_putstr("Error\nTrop d'utilisation texture sprite dans la carte\n");
	if (err == 30)
		ft_putstr("Error\nMauvais élément dans texture sprite\n");
	if (err == 31)
		ft_putstr("Error\nMalloc a échoué dans texture sprite recup\n");
	if (err == 32)
		ft_putstr("Error\nOpen a échoué dans texture sprite mauvais fichier\n");
	if (err == 33)
		ft_putstr("Error\nClose a échoué dans exture sprite recup\n");
	if (err == 34)
		ft_putstr("Error\nTrop d'utilisation de f_color\n");
	if (err == 35)
		ft_putstr("Error\nMauvais élément dans f_color\nex: F nbr,nbr,nbr\n");
	return (0);
}
