/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongjle2 <dongjle2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:25:08 by dongjle2          #+#    #+#             */
/*   Updated: 2023/05/10 07:31:09 by dongjle2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	**ft_split(char *str);

int	cnt_file_size(char *argv)
{
	int		fd;
	int		file_size;
	char	buf[1];

	file_size = 0;
	fd = open(argv, O_RDONLY);
	while (0 < read(fd, buf, 1))
		file_size++;
	close(fd);
	return (file_size);
}

int	check_nl_empty(char *file_linear)
{
	int	found;
	int	idx;

	idx = 0;
	found = 0;
	while (file_linear[idx])
	{
		if (file_linear[idx] == '\n')
			found++;
		idx++;
	}
	if (found == 0)
		return (0);
	return (1);
}

char	*mk_arr(char *argv, int len_file)
{
	int		fd;
	char	*maloc;

	maloc = malloc(len_file + 1);
	maloc[len_file] = 0;
	fd = open(argv, O_RDONLY);
	read(fd, maloc, len_file);
	close(fd);
	return (maloc);
}

char	**mk_map(char *argv)
{
	int		file_size;
	char	*file_linear;
	char	**map;

	file_size = cnt_file_size(argv);
	if (file_size <= 1)
		return (NULL);
	file_linear = mk_arr(argv, file_size);
	if (check_nl_empty(file_linear) == 0)
		return (NULL);
	map = ft_split(file_linear);
	free(file_linear);
	return (map);
}
