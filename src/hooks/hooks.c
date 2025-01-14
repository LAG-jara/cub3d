/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barce.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:23:08 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/02/19 00:45:11 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "cub3d_struct.h"
#include "cub3d_hooks.h"

void	hooks(t_graphics *graphics)
{
	mlx_hook(graphics->win, 2, 1L << 0, hooks_keys_press, graphics);
	mlx_hook(graphics->win, 3, 1L << 1, hooks_keys_release, graphics);
	mlx_hook(graphics->win, 4, 1L << 2, mouse_press_handler, graphics);
	mlx_hook(graphics->win, 6, 1L << 6, camera_press_handler, graphics);
	mlx_hook(graphics->win, 5, 1L << 3, mouse_release_handler, graphics);
	mlx_hook(graphics->win, 17, 0, exit_on_click, graphics);
}
