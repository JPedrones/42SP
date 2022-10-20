/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedrones <jpedrones@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:38:54 by jpedrones         #+#    #+#             */
/*   Updated: 2022/10/20 12:55:40 by jpedrones        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H

# include "fdf.h"

typedef struct s_projection	t_projection;
typedef struct s_coord		t_coord;
typedef struct s_map		t_map;

t_projection	init_projection(t_map *map);
void			t_coord_new(int zoom, t_coord **current);
void			read_map(t_map *map, int fd);
void			init_map(t_map *map, int fd);

#endif //MAP_H