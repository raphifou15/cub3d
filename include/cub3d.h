/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:14:22 by rkhelif           #+#    #+#             */
/*   Updated: 2021/02/15 18:29:44 by rkhelif          ###   ########.fr       */
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

typedef struct		s_color
{
	int				t;
	int				r;
	int				g;
	int				b;
}					t_color;

typedef struct		s_mlx
{
	t_xvar			*mlx;
	t_win_list		*win;
	t_img			*img;
}					t_mlx;

typedef struct		s_player
{
	double			pos_x;
	double			pos_y;
	double			dir_x;
	double			dir_y;
	double			plane_x;
	double			plane_y;
	double			move_speed;
	double			rotate_speed;
}					t_player;

typedef struct		s_ray
{
	double			camera_x;
	double			ray_dir_x;
	double			ray_dir_y;
}					t_ray;

typedef struct		s_point
{
	int				map_x;
	int				map_y;
	double			side_dist_x;
	double			side_dist_y;
	double			delta_dist_x;
	double			delta_dist_y;
	double			perp_wall_dist;
	int				step_x;
	int				step_y;
	int				hit;
	int				side;
	int				tex_x;
}					t_point;

typedef struct		s_draw
{
	int				draw_start;
	int				draw_end;
}					t_draw;

typedef struct		s_key
{
	int				key_a;
	int				key_w;
	int				key_s;
	int				key_d;
	int				key_right;
	int				key_left;
}					t_key;

typedef struct		s_sprite
{
	double			dist;
	double			pos_x;
	double			pos_y;
	double			sprite_x;
	double			sprite_y;
	double			inv_det;
	double			transform_x;
	double			transform_y;
	int				sprite_screen_x;
	int				sprite_height;
	int				draw_start_y;
	int				draw_end_y;
	int				sprite_width;
	int				draw_start_x;
	int				draw_end_x;
	int				tex_x;
	int				tex_y;
	struct s_sprite	*next;
}					t_sprite;

typedef struct		s_map
{
	char			**map;
	char			*first_map;
	char			orientation;
	int				line_map;
	int				res_x;
	int				res_y;
	int				text_width;
	int				text_height;
	t_img			*img_s;
	t_img			*img_n;
	t_img			*img_w;
	t_img			*img_e;
	t_img			*img_sp;
	char			*north_text;
	char			*south_text;
	char			*west_text;
	char			*east_text;
	char			*sprite_text;
	int				c_color;
	int				f_color;
	t_mlx			mlx;
	t_player		player;
	t_ray			ray;
	t_point			point;
	t_draw			draw;
	t_key			key;
	t_sprite		*sprite;
	char			*data;
	int				size_line;
	int				*addr;
	int				nbr_sprites;
	int				argc;
	int				screen_x;
	int				screen_y;
}					t_map;

int					ft_error(int err);
int					ft_error2(int err);
int					ft_error3(int err);
int					ft_error4(int err);
void				ft_putstr(char *str);
int					ft_control_file(char *file, char *extention);
int					ft_strcmp(char *s1, char *s2);
int					ft_check_map_and_recup(t_map *map, char *file);
t_map				*map_init(void);
int					ft_check_line(t_map *map, char *line);
int					ft_recup_resolution(t_map *map, char *line, int i);
int					ft_modif_atoi(char *str);
int					ft_recup_text_north(t_map *map, char *line, int i);
int					ft_recup_text_south(t_map *map, char *line, int i);
int					ft_recup_text_west(t_map *map, char *line, int i);
int					ft_recup_text_east(t_map *map, char *line, int i);
int					ft_recup_text_sprite(t_map *map, char *line, int i);
int					ft_recup_f_color(t_map *map, char *line, int i);
int					ft_recup_c_color(t_map *map, char *line, int i);
int					ft_recup_line_map(t_map *map, char *line, int i);
char				*ft_modif_strcpy(char *str);
char				*ft_modif_strdup(char *str);
int					ft_check_malloc(t_map *map);
void				ft_init_ptr(int	(**ptr)(t_map *map, char *line, int i));
t_color				ft_init_color(void);
int					ft_check_inside_line(char *line, t_map *map);
int					ft_check_line2(char *str);
int					ft_check_line_map1(char *str, t_map *map);
int					ft_recup_f_color2(t_map *map, t_color color, char *line,
						int i);
int					ft_recup_c_color2(t_map *map, t_color color, char *line,
						int i);
int					ft_finnish_check_split(t_map *map);
char				**ft_split2(t_map *map, char c);
char				*ft_put_in_tab(char *str, char c);
char				*ft_free2(char **tab, int max);
int					ft_check_map2(char **tab);
int					ft_check_map_strcmp(char *s1, char *s2);
void				ft_cub3d(t_map *map);
void				ft_cub3d2(t_map *map, int y, int x);
void				display_square_mlx(t_map *map, int y, int x);
void				my_mlx_pixel_put(t_img *img, int x, int y, int color);
void				init_player(t_map *map);
void				init_player2(t_map *map);
void				init_key(t_map *map);
int					next_frame(t_map *map);
int					key_pressed(int keycode, t_map *map);
int					key_release(int keycode, t_map *map);
int					init_texture(t_map *map);
int					init_texture2(t_map *map);
int					free_img_text(t_map *map);
int					ft_exit(t_map *map);
int					ft_exit2(t_map *map);
void				ft_error5(int err);
void				ft_raycasting(t_map *map);
void				ft_point(t_map *map, int x);
void				ft_point2(t_map *map);
void				ft_wall_hit(t_map *map);
void				ft_distance(t_map *map);
void				ft_point_wall(t_map *map);
void				ft_point_wall2(t_map *map);
void				ft_draw_wall(t_map *map, int x, int div, int mod);
int					ft_draw_wall2(t_map *map, int x, int y, int z);
void				ft_draw_ceil_floor(t_map *map, int x);
void				ft_move(t_map *map);
void				ft_move2(t_map *map);
void				ft_move3(t_map *map);
void				ft_move4(t_map *map);
void				ft_stock_data(t_map *map);
void				ft_sprite(t_map *map, double *z_buffer);
int					ft_list_push_front(t_sprite **sprite, int x, int y);
t_sprite			*ft_create_elem(int x, int y);
void				ft_sprite_clear(t_sprite *sprite);
void				ft_sprite_distance(t_sprite *sprite, t_map *map);
void				ft_sprite_order(t_sprite **sprite);
void				ft_change_data_sprite(t_sprite *sprite);
void				ft_point_sprite(t_sprite *sprite, t_map *map);
void				ft_point_sprite2(t_sprite *sprite, t_map *map);
void				ft_draw_sprite(t_sprite *sprite, t_map *map);
void				ft_stock_data2(t_map *map);
void				ft_global_save(t_map *map);
void				ft_save(t_map *map);
void				ft_save2(t_map *map, int fd);
#endif
