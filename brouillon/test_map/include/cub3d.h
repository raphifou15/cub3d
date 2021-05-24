/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:14:22 by rkhelif           #+#    #+#             */
/*   Updated: 2021/01/31 21:45:59 by rkhelif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# define _USE_MATH_DEFINES

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "get_next_line.h"
# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"

typedef	struct	s_color
{
	int			t;
	int			r;
	int			g;
	int			b;
}				t_color;

typedef struct				s_list_sprite
{
	struct s_list_sprite	*next;
	double					x;
	double				y;
	int					hx;
	int					hy;
	int					touch;
	double				inc1;
	double				inc2;
	double				p;
	double				q;
	double				distance;
	double				screen_x;
	double				screen_y;
	double				sprite_heigth;
}							t_list_sprite;								

typedef struct	s_help
{
	long		x;
	long		y;
}				t_help;

typedef struct	s_mlx
{
	t_xvar		*mlx;
	t_win_list	*win;
	t_img		*img;
}				t_mlx;

typedef struct	s_player
{
	double		x;
	double		y;
	double		rotation_angle;
	double		fov_angle;
	double		numb_rays;
	int			brick;
}				t_player;

typedef struct	s_point
{
	double		hy_inter;
	double		hx_inter;
	double		hy_step;
	double		hx_step;

	double		vy_inter;
	double		vx_inter;
	double		vy_step;
	double		vx_step;

	double		wall_x;
	double		wall_y;
	double		wall_x2;
	double		wall_y2;
	double		wall_x3;
	double		wall_y3;
	double		wall_x4;
	double		wall_y4;

	double		vx2;
	double		vy2;
	double		hy2;
	double		hx2;

	long		distance;		
}				t_point;

typedef struct	s_rect
{
	long		x1;
	long		x2;
	long		x3;
	long		y1;
	long		y2;
	long		y3;
	int			line;
}				t_rect;

typedef struct	s_map
{
	char		**map;
	char		*first_map;
	char		orientation;
	int			line_map;
	int			res_x;
	int			res_y;
	t_img		*img_s;
	t_img		*img_n;
	t_img		*img_w;
	t_img		*img_e;
	t_img		*img_sp;
	char		*north_text;
	char		*south_text;
	char		*west_text;
	char		*east_text;
	char		*sprite_text;
	int			c_color;
	int			f_color;
	t_mlx		mlx;
	t_player	player;
	t_point		point;
	t_rect		rec;
	t_list_sprite	*ls_sprite;
	double		rotation_line;
	char		*addr;
	int			size_line;
	int			display_0;
	int			r;
	int			count;
	long		z;
	int			i;
	int			o;
	long		div;
	long		mod;
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
void			ft_cub3d(t_map *map);
void			ft_recup_first_player_sprite(t_map *map);
void			ft_list_push_back(t_list_sprite **begin_list, int y, int x,
				t_map *map);
t_list_sprite	*ft_create_elem(int y, int x, t_map *map);
void			ft_list_clear(t_list_sprite *begin_list,
				char *(*free_fct)(void *));

void			display_square_mlx(t_map *map, int y, int x, int size);
void			display_square_mlx_2(t_map *map, int y, int x, int size);
void			my_mlx_pixel_put(t_img *img, int x, int y, int color);
void			init_player(t_map *map);
int				next_frame(t_map *map);
int				key_pressed(int keycode, t_map *map);
int				key_release(int keycode, t_map *map);
void			ft_check_player_play_forward(t_map *map, double rotation);
void			ft_check_player_play_back(t_map *map, double rotation);
void			ft_check_player_play_right(t_map *map, double rotation);
void			ft_check_player_play_left(t_map *map, double rotation);
void			draw_fov(t_map *map, double rotation);
void			ft_find_point(t_map *map, long x, long y, double rotation);
double			ft_new_rotation_angle(double rotation);
void			ft_point_wall(t_map *map, double rotation);
double			ft_point_distance(double x1, double x2);
int				ft_vertical_point(t_map *map, double rotation);
int				ft_horizontal_point(t_map *map, double rotation);
int				ft_equal_point(t_map *map, double rotation, long x, long y);
long			ft_distance(t_map *map, double rotation, int x);
void			init_rect(t_map *map, long wsh, long i, int x);
void			ft_find_img(t_map *map, double rotation, long z, int x);
void			ft_find_img2(t_map *map, t_img *img);
void			ft_find_img3(t_map *map, long z, t_img *img1, t_img *img2);
long			ft_find_point_on_img(t_map *map, int x);
void			draw_ceil_floor(t_rect rec, t_map *map);
void			draw_rectangle(t_rect rec, t_map *map, double rotation, int x);
int				draw_rectangle_pixel_wall(t_map *map, long recx, long recy,
				long z);
int				init_texture(t_map *map);
int				init_texture2(t_map *map);
int				free_img_text(t_map *map);
int				ft_exit(t_map *map);
void			ft_error5(int err);
void			draw_fov2(t_map *map, double rotation);
void			draw_sprite(t_map *map, double rotation);
void			ft_new_list_copy(t_list_sprite **new_list,
				t_list_sprite **begin_list);
void			ft_distance_sprite_player(t_list_sprite **begin_list,
				t_map *map);
void			ft_touch_sprite(t_list_sprite **begin_list, int y, int x);
void			ft_touch_0(t_list_sprite **begin_list);
void			ft_list_sort(t_list_sprite **begin_list);
void			ft_list_sort2(t_list_sprite **begin_list);
#endif
