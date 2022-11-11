/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msebbane <msebbane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:21:51 by msebbane          #+#    #+#             */
/*   Updated: 2022/11/10 14:58:13 by msebbane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>
# include "../GNL/get_next_line.h"
# include "key_hook.h"
# include "struct.h"

int		main(int argc, char **argv);

//**********************************LIBFT********************************//
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strlen(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	**ft_split(char *s, char c);
char	*ft_strtrim(char *s1, char *set);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *s);
//**********************************PARSING********************************//
void	malloc_map(char **av, t_cub *cub);
void	read_map(char **argv, t_cub *cub);
void	check_valid_map(t_cub *cub);
void	check_valid_format(t_cub *cub);
int		check_char(char c);
int		skip_spaces(char *line, int *i);
//**********************************TEXTURES*****************************//
t_img	init_img(void	*mlx, char *path);
//**********************************PLAYER********************************//
//**********************************RAY_CASTING****************************//
//**********************************ERROR_MSG********************************//
char	error_msg(char *msg);
//**********************************TEST PRINT********************************//
void	test_print(t_cub *cub);

#endif