/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kslotova <kslotova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:51:04 by oairola           #+#    #+#             */
/*   Updated: 2022/01/27 15:02:35 by kslotova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 21
# define FD_MAX 8192

typedef struct t_list
{
	int		pcs;
	int		*array;
	int		counter;
	int		fd;
	int		gnl_flag;
	int		flag;
	int		neigh_i;
	int		j;
	char	**grid;
	int		**arr;
	int		min_x;
	int		min_y;
	int		x_count;
	int		y_count;
	int		piece_cmp;
	int		validity_flag;
	int		**real_arr;
	int		ltr;
	int		c;
	int		r;
	int		i;
	int		rocole[3];
	int		**pc_arr;
	int		size;
	char	*line;
}				t_etris;

char	**freer_grid(char **grid, int grid_side);
void	freer(char **grid);
int		get_next_line(const int fd, char **line);
char	**create_grid(int pieces);
void	printer(char **grid);
int		get_next_line(const int fd, char **line);
size_t	ft_strlen(const char *s);
void	ft_strdel(char **as);
int		ft_sqrt(int nb);
int		safe_chk(char **grid, int *tetri, int *roco, int max_size);
int		*inttoarray(int n);
int		*ft_intdup(int const *src, size_t len);
void	ft_error_exit(char *msg);
int		*ft_intnew(int size);
int		*ft_grid_to_intarray(char **grid);
void	file_reader(t_etris *ts);
int		size_increaser(int size, int **tetri, int last_pc);
char	**solver(t_etris ts);
int		populate_grid(t_etris *ts, int i);
void	file_reader(t_etris *ts);
void	piece_validity(int	**array, t_etris *trs);
char	*ft_rev_strchr(const char *s);
char	**dots_b(char **grid, int *tetri, int *rocole);
char	**putdots(char **grid, int size);
void	freer_int(int **grid, int size);

#endif
