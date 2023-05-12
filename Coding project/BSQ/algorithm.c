/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 01:39:24 by dongjle2          #+#    #+#             */
/*   Updated: 2023/05/10 15:33:50 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	min(int a, int b, int c)
{
	int	x;

	if (a < b)
		x = a;
	else
		x = b;
	if (x < c)
		return (x);
	else
		return (c);
}

int	**mk_new_map(char **map, int len_line, int *first_line)
{
	int	**new_map;
	int	row;
	int	col;

	row = 0;
	new_map = (int **)malloc(sizeof(int *) * first_line[0]);
	while (row < first_line[0])
		new_map[row++] = (int *)malloc(sizeof(int) * len_line);
	row = 0;
	while (row < first_line[0])
	{
		col = 0;
		while (col < len_line)
		{
			if (map[row + 1][col] == first_line[1])
				new_map[row][col] = 0;
			else if (map[row + 1][col] == first_line[2])
				new_map[row][col] = -1;
			col++;
		}
		row++;
	}
	return (new_map);
}

void	calculate(int **new_map, int len_line, int *first_line)
{
	int	row;
	int	col;
	int	min_val;

	row = 1;
	while (row < first_line[0])
	{
		col = 1;
		while (col < len_line)
		{
			min_val = min(new_map[row - 1][col], new_map[row][col - 1],
					new_map[row - 1][col - 1]);
			if (new_map[row][col] == -1)
				;
			else
				new_map[row][col] = min_val + 1;
			col++;
		}
		row++;
	}
}

int	*get_size_r_c(int **new_map, int len_line, int *first_line)
{
	int	row;
	int	col;
	int	size;
	int	*s_r_c;

	size = 0;
	row = 0;
	s_r_c = (int *)malloc(sizeof(int) * 3);
	while (row < first_line[0])
	{
		col = 0;
		while (col < len_line)
		{
			if (size < new_map[row][col])
			{
				size = new_map[row][col];
				s_r_c[0] = size;
				s_r_c[1] = row + 1;
				s_r_c[2] = col;
			}
			col++;
		}
		row++;
	}
	return (s_r_c);
}

int	*do_math(char **map, int len_line, int *first_line)
{
	int	**new_map;
	int	*s_r_c;
	int	row;

	row = 0;
	new_map = mk_new_map(map, len_line, first_line);
	calculate(new_map, len_line, first_line);
	s_r_c = get_size_r_c(new_map, len_line, first_line);
	while (row < first_line[0])
	{
		free(new_map[row]);
		row++;
	}
	free(new_map);
	return (s_r_c);
}
