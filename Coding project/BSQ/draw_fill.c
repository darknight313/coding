/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_fill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongjle2 <dongjle2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 03:18:58 by dongjle2          #+#    #+#             */
/*   Updated: 2023/05/10 03:43:43 by dongjle2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	free_mem(char **map, int *first_line, int *size_r_c);

void	draw_n_chr(char **map, int *first_line, int *size_r_c, int len_line)
{
	int	row;
	int	col;
	int	i;
	int	j;

	row = (size_r_c[1] - size_r_c[0]);
	i = 0;
	while (i <= size_r_c[0])
	{
		col = size_r_c[2] - size_r_c[0];
		j = 0;
		while (j++ <= size_r_c[0])
			map[row][col++] = first_line[3];
		row++;
		i++;
	}
	row = 1;
	while (row <= first_line[0])
	{
		col = 0;
		while (col < len_line)
			write(1, &map[row][col++], 1);
		write(1, "\n", 1);
		row++;
	}
}

void	find_first_loc(char **map, int *first_line, int len_line)
{
	int	row;
	int	col;

	row = 1;
	while (row < first_line[0] + 1)
	{
		col = 0;
		while (col < len_line)
		{
			if (map[row][col] == first_line[1])
			{
				map[row][col] = first_line[3];
				return ;
			}
			col++;
		}
		row++;
	}
}

void	draw_one_chr(char **map, int *first_line, int len_line)
{
	int	row;
	int	col;

	row = 1;
	while (row <= first_line[0])
	{
		col = 0;
		while (col < len_line)
			write(1, &map[row][col++], 1);
		write(1, "\n", 1);
		row++;
	}
}

void	draw(char **map, int *first_line, int len_line, int *size_r_c)
{
	if (size_r_c[0] == 0)
	{
		find_first_loc(map, first_line, len_line);
		draw_one_chr(map, first_line, len_line);
	}
	else
		draw_n_chr(map, first_line, size_r_c, len_line);
	free_mem(map, first_line, size_r_c);
}
