/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilouacha <ilouacha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:46:31 by ilouacha          #+#    #+#             */
/*   Updated: 2024/02/27 15:12:32 by ilouacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx/mlx.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	deal_key(int key, void *param)
{
	ft_putchar('X');
	return (0);
}

int	main()
{
	void	*mlx_ptr;
	void	*win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 800, 500, "Cub3D");
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFFFFFF);
	mlx_key_hook(win_ptr, deal_key, (void *)0);
	// mlx_key_hook(win_ptr, int (*func_ptr)(), void *param);
	// mlx_mouse_hook(win_ptr, int (*func_ptr)(), void *param);
	// mlx_expose_hook(win_ptr, int (*func_ptr)(), void *param);
	mlx_loop(mlx_ptr);
	
}