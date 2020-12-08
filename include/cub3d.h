/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:14:22 by rkhelif           #+#    #+#             */
/*   Updated: 2020/12/08 17:34:25 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "../minilibx-linux/mlx.h"

typedef	struct	s_color
{
	int			t;
	int			r;
	int			g;
	int			b;
}				t_color;

typedef struct	s_map
{
	char		**map;
	char		*first_map;
	char		orientation;
	int			line_map;
	int			res_x;
	int			res_y;
	char		*north_text;
	char		*south_text;
	char		*west_text;
	char		*east_text;
	char		*sprite_text;
	int			c_color;
	int			f_color;
}				t_map;

int				ft_error(int err);
int				ft_error2(int err);
int				ft_error3(int err);
int				ft_error4(int err);
void			ft_putstr(char *str);
int				ft_control_file(char *file, char *extention);
int				ft_strcmp(char *s1, char *s2);
int				ft_check_map_and_recup(t_map *map, char *file);
t_map			*map_init(void);
int				ft_check_line(t_map *map, char *line);
int				ft_recup_resolution(t_map *map, char *line, int i);
int				ft_modif_atoi(char *str);
int				ft_recup_text_north(t_map *map, char *line, int i);
int				ft_recup_text_south(t_map *map, char *line, int i);
int				ft_recup_text_west(t_map *map, char *line, int i);
int				ft_recup_text_east(t_map *map, char *line, int i);
int				ft_recup_text_sprite(t_map *map, char *line, int i);
int				ft_recup_f_color(t_map *map, char *line, int i);
int				ft_recup_c_color(t_map *map, char *line, int i);
int				ft_recup_line_map(t_map *map, char *line, int i);
char			*ft_modif_strcpy(char *str);
char			*ft_modif_strdup(char *str);
int				ft_check_malloc(t_map *map);
void			ft_init_ptr(int	(**ptr)(t_map *map, char *line, int i));
t_color			ft_init_color(void);
int				ft_check_inside_line(char *line, t_map *map);
int				ft_check_line2(char *str);
int				ft_check_line_map1(char *str, t_map *map);
int				ft_recup_f_color2(t_map *map, t_color color, char *line, int i);
int				ft_recup_c_color2(t_map *map, t_color color, char *line, int i);
int				ft_finnish_check_split(t_map *map);
char			**ft_split2(t_map *map, char c);
char			*ft_put_in_tab(char *str, char c);
char			*ft_free2(char **tab, int max);
int				ft_check_map2(char **tab);
int				ft_check_map_strcmp(char *s1, char *s2);
#endif
