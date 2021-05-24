/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_in_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 10:55:12 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/26 20:46:33 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

char	*ft_put_in_tab(char *str, char c)
{
	int		i;
	int		max;
	char	*str2;

	i = -1;
	while (str[++i] != c)
		;
	max = i;
	if ((str2 = malloc(sizeof(char) * (max + 1))) == NULL)
		return (NULL);
	i = -1;
	while (str[++i] != c)
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
