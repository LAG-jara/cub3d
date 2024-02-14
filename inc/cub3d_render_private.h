/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d_render_private.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:17:07 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/02/14 15:31:35 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_RENDER_PRIVATE_H
# define CUB3D_RENDER_PRIVATE_H

# include "cub3d_struct.h"

# define RAYS 64
# define MMAP_SQR_SIZE 10

void	put_background_layer(t_graphics *graphics);

void	put_wall_layer(t_graphics *graphics);

#endif
