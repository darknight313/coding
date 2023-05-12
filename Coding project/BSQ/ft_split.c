/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongjle2 <dongjle2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:46:11 by dongjle2          #+#    #+#             */
/*   Updated: 2023/05/09 22:18:55 by dongjle2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != '\n')
	{
		i++;
	}
	return (i);
}

int	ft_strlenn(char *str)
{
	int	i;

	i = 0;
	while ((str[i]) != 0)
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return ;
}

int	count_line(char *str)
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (str[idx])
	{
		if (str[idx] == '\n')
			idx++;
		else
		{
			count++;
			while (str[idx] != '\n' && (str[idx]))
				idx++;
		}
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**map;
	int		num_lines;
	int		row;
	int		str_idx;
	int		len_line;

	row = 0;
	str_idx = 0;
	num_lines = count_line(str);
	map = (char **)malloc(sizeof(char *) * (num_lines + 1));
	while (row < num_lines)
	{
		len_line = ft_strlen(str + str_idx);
		map[row] = (char *)malloc(sizeof(char) * (len_line + 1));
		ft_strcpy(map[row], str + str_idx);
		str_idx += (len_line + 1);
		row++;
	}
	map[num_lines] = (char *)malloc(1);
	map[num_lines][0] = 0;
	return (map);
}
