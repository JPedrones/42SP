/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedrones <jpedrones@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:36:54 by jpedrones         #+#    #+#             */
/*   Updated: 2022/10/20 12:56:30 by jpedrones        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "draw.h"

void	rotate_x(int *y, int *z, double alpha)
{
	int	aux;

	aux = *y;
	*y = aux * cos(alpha) + *z * sin(alpha);
	*z = -aux * sin(alpha) + *z * cos(alpha);
}

void	rotate_y(int *x, int *z, double beta)
{
	int	aux;

	aux = *x;
	*x = aux * cos(beta) + *z * sin(beta);
	*z = -aux * sin(beta) + *z * cos(beta);
}

void	rotate_z(int *x, int *y, double gamma)
{
	int	aux_x;
	int	aux_y;

	aux_x = *x;
	aux_y = *y;
	*x = aux_x * cos(gamma) - aux_y * sin(gamma);
	*y = aux_x * sin(gamma) + aux_y * cos(gamma);
}

void	isometric(int *x, int *y, int z)
{
	float	aux_x;
	float	aux_y;

	aux_x = (*x - *y) * cos(0.523599);
	aux_y = -z + (*x + *y) * sin(0.523599);
	*x = aux_x;
	*y = aux_y;
}
