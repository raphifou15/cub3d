# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhelif <rkhelif@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/15 22:03:57 by rkhelif           #+#    #+#              #
#    Updated: 2021/02/16 01:20:13 by rkhelif          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = cub3D
RM = rm -rf
DIR_OBJ = other
DIR_SRC = src
DIR_INC = inc
DIR_GET = get_next


SRCS =	display_square_mlx.c \
			free_img_text.c \
			ft_change_data_sprite.c \
			ft_check_inside_line.c \
			ft_check_line2.c \
			ft_check_line.c \
			ft_check_line_map1.c \
			ft_check_malloc.c \
			ft_check_map2.c \
			ft_check_map_and_recup.c \
			ft_check_map_strcmp.c \
			ft_control_file.c \
			ft_create.elem.c \
			ft_cub3d2.c \
			ft_cub3d.c \
			ft_distance.c \
			ft_draw_ceil_floor.c \
			ft_draw_sprite.c \
			ft_draw_wall2.c \
			ft_draw_wall.c \
			ft_error2.c \
			ft_error3.c \
			ft_error4.c \
			ft_error5.c \
			ft_error.c \
			ft_exit.c \
			ft_finnish_check_split.c \
			ft_free2.c \
			ft_global_save.c \
			ft_init_color.c \
			ft_init_ptr.c \
			ft_list_push_front.c \
			ft_modif_atoi.c \
			ft_modif_strcpy.c \
			ft_modif_strdup.c \
			ft_move2.c \
			ft_move3.c \
			ft_move4.c \
			ft_move.c \
			ft_point2.c \
			ft_point.c \
			ft_point_sprite2.c \
			ft_point_sprite.c \
			ft_point_wall2.c \
			ft_point_wall.c \
			ft_put_in_tab.c \
			ft_putstr.c \
			ft_raycasting.c \
			ft_recup_c_color2.c \
			ft_recup_c_color.c \
			ft_recup_f_color2.c \
			ft_recup_f_color.c \
			ft_recup_line_map.c \
			ft_recup_resolution.c \
			ft_recup_text_east.c \
			ft_recup_text_north.c \
			ft_recup_text_south.c \
			ft_recup_text_sprite.c \
			ft_recup_text_west.c \
			ft_save2.c \
			ft_save.c \
			ft_split2.c \
			ft_sprite.c \
			ft_sprite_clear.c \
			ft_sprite_distance.c \
			ft_sprite_order.c \
			ft_stock_data2.c \
			ft_stock_data.c \
			ft_strcmp.c \
			ft_wall_hit.c \
			get_next_line.c \
			get_next_line_utils.c \
			init_key.c \
			init_player2.c \
			init_player.c \
			init_texture2.c \
			init_texture.c \
			key_pressed.c \
			key_release.c \
			main.c \
			map_init.c \
			my_mlx_pixel_put.c \
			next_frame.c

OBJS = ${addprefix ${DIR_OBJ}/,${SRCS:.c=.o}}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:${NAME}

${NAME}: ${OBJS}
	make -C minilibx-linux
	${CC} ${FLAGS} -L minilibx-linux ${OBJS} -o ${NAME}  -lm -lmlx -lXext -lX11

${DIR_OBJ}/%.o: ${DIR_SRC}/%.c
	${CC} $(CFLAGS) -I ${DIR_INC} -I minilibx-linux -c $< -o $@
${DIR_OBJ}/%.o: ${DIR_GET}/%.c
	${CC} ${CFLAGS} -I ${DIR_INC} -I minilibx-linux -c $< -o $@
clean:
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re: fclean all
