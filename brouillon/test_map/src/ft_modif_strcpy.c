/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif_strcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:43:12 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/03 15:26:32 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

char	*ft_modif_strcpy(char *str)
{
	int		i;
	char	*str2;

	i = -1;
	while (str[++i] && str[i] != ' ')
		;
	if ((str2 = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i] && str[i] != ' ')
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
