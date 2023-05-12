/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongjle2 <dongjle2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:30:01 by dongjle2          #+#    #+#             */
/*   Updated: 2023/05/10 07:59:10 by dongjle2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		*read_first_line(char *first_line);
char	**mk_map(char *argv);
int		check_map(char **map, int *first_line);
int		*do_math(char **map, int len_line, int *first_line);
void	draw(char **map, int *first_line, int len_line, int *size_r_c);

void	free_mem(char **map, int *first_line, int *size_r_c)
{
	int	row;

	row = 0;
	while (map[row][0] != 0)
	{
		free(map[row]);
		row++;
	}
	free(map);
	free(first_line);
	free(size_r_c);
}

void	read_files(int argc, char *argv[])
{
	char	**map;
	int		*first_line;
	int		*size_r_c;
	int		len_line;
	int		i;

	i = 0;
	while (++i < argc)
	{
		map = mk_map(argv[i]);
		if (map == NULL)
		{
			write(2, "map error\n", 10);
			continue ;
		}
		first_line = read_first_line(map[0]);
		len_line = check_map(map, first_line);
		if (len_line == 0)
		{
			write(2, "map error\n", 10);
			continue ;
		}
		size_r_c = do_math(map, len_line, first_line);
		draw(map, first_line, len_line, size_r_c);
	}
}

int	main(int argc, char *argv[])
{
	char	buf[2];

	if (argc == 1)
	{
		write(1, "Type 1 letters\n", 16);
		read(0, buf, 1);
		close(0);
		write(1, "input: ", 7);
		write(1, buf, 1);
		write(1, "\n", 1);
		write(1, "no argument error\n", 18);
		exit(0);
	}
	read_files(argc, argv);
	return (0);
}
