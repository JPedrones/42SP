/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedrones <jpedrones@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:29:22 by jpedrones         #+#    #+#             */
/*   Updated: 2022/10/20 12:55:13 by jpedrones        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "map.h"
# include "draw.h"
# include "error_message.h"

# include <mlx.h>
# include <math.h>	//sin, cos and abs
# include <fcntl.h>	//open and close
# include <errno.h>	//errno
# include <stdio.h>	//perror

# define X_WIN  1280
# define Y_WIN  720
# define X_MENU 160

typedef struct s_coord
{
	int				z;
	int				pos;
	struct s_coord	*next;
}	t_coord;

typedef struct s_projection
{
	int		zoom;
	double	alpha;
	double	beta;
	double	gamma;
	int		iso;
	float	z_divisor;
	int		x_offset;
	int		y_offset;
}	t_projection;

typedef struct s_map
{
	int				length;
	int				height;
	int				z_min;
	int				z_max;
	t_coord			*coord;
	t_projection	cam;
}	t_map;

typedef struct s_image
{
	void	*img;
	char	*addr;
	int		bpp;
	int		l_length;
	int		endian;
}	t_image;

typedef struct s_data
{
	void	*mlx;
	void	*win;
	t_image	img;
	t_map	map;
}	t_data;

// fdf_utils.c
void	terminate(char *s);
void	init_fdf(t_data *fdf);
void	close_window(t_data *fdf, t_map *map);
int		exit_button(t_data *fdf);

// controls.c
int		key_press(int keycode, t_data *fdf);

#endif //FDF_H