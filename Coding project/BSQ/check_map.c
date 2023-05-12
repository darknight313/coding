/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongjle2 <dongjle2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:42:30 by dongjle2          #+#    #+#             */
/*   Updated: 2023/05/10 07:59:13 by dongjle2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str);
int	ft_strlenn(char *str);

int	is_prt(char chr)
{
	if (126 < chr || (0 <= chr && chr < 32))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	ret;
	int	sign;

	sign = 1;
	ret = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (sign * ret);
}

int	*read_first_line(char *first_line)
{
	int	len;
	int	*info;

	len = ft_strlenn(first_line);
	info = (int *)malloc(sizeof(int) * 4);
	info[3] = first_line[len - 1];
	info[2] = first_line[len - 2];
	info[1] = first_line[len - 3];
	first_line[len - 3] = 0;
	info[0] = ft_atoi(first_line);
	return (info);
}

int	ft_strcmp(char *s1, char s2, char s3)
{
	int	idx;

	idx = 0;
	while (s1[idx])
	{
		if ((s1[idx] != s2 && s1[idx] != s3))
			return (0);
		idx++;
	}
	return (1);
}

int	check_map(char **map, int *fl)
{
	int	len_line;
	int	row;
	int	idx;

	idx = 0;
	if (map == NULL)
		return (0);
	if (!is_prt((char)fl[1]) || !is_prt((char)fl[2]) || !is_prt((char)fl[3]))
		return (0);
	if ((fl[1] == fl[2]) || (fl[1] == fl[3]) || (fl[2] == fl[3]))
		return (0);
	len_line = ft_strlenn(map[1]);
	if (len_line < 1)
		return (0);
	row = 0;
	while (map[++row][0] != 0)
	{
		if (ft_strcmp(map[row], (char)fl[1], (char)fl[2]) == 0)
			return (0);
		if (ft_strlenn(map[row]) != len_line)
			return (0);
	}
	if (row - 1 != fl[0])
		return (0);
	return (len_line);
}
