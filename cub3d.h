/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilouacha <ilouacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:28:00 by ilouacha          #+#    #+#             */
/*   Updated: 2024/02/28 10:31:34 by ilouacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include "mlx/mlx.h"
# include <unistd.h>

typedef struct s_vector
{
	double		x;
	double		y;
}				t_vector;

typedef struct s_mlx
{
	void		*mlx_ptr;
	void		*mlx_win;
}				t_mlx;

typedef struct s_ray
{
	t_vector	pos;
	t_vector	dir;
	t_vector	plane;
	t_vector	ray_dir;
	int			step_x;
	int			step_y;
	t_vector	side_dist;
	t_vector	delta_dist;
	double		move_speed;
	double		rot_spped;
	int			texture;
}				t_ray;

typedef struct s_data
{
	char	*north;
	char	*south;
	char	*west;
	char	*east;
	char	**fd_tab;
	int		nbr_line;
	int		ceil_rgb[3];
	int		floor_rgb[3];
	int		height;
	int		width;
	int		dx;
	int		dy;
	int		r;
	int		g;
	int		b;
	int		pos_x;
	int		pos_y;
}			t_data;

#endif