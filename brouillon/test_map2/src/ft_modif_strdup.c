/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modif_strdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 16:16:15 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/07 17:11:54 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

char	*ft_modif_strdup(char *str)
{
	char	*str2;
	int		i;

	i = -1;
	str2 = NULL;
	while (str[++i])
		;
	if ((str2 = malloc(sizeof(char) * (i + 2))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		str2[i] = (str[i] == ' ') ? 49 : str[i];
	str2[i] = '\n';
	str2[++i] = '\0';
	return (str2);
}
