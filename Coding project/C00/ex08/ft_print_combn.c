/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:05:32 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/25 22:21:21 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_string(char c)
{
	write(1, &c, 1);
}

void	print_arr(char *arr, int size, int end)
{
	int	i;

	i = 0;
	if (arr[0] == end)
	{
		while (i < size)
			ft_put_string(arr[i++]);
		write(1, "\n", 1);
		return ;
	}
	while (i < size)
	{
		ft_put_string(arr[i++]);
	}
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char	arr[20];
	char	arr_max[20];
	int		flag;
	int		base;
	int		i;

	i = 0;
	while (i < n)
	{
		arr[i] = i + 48;
		arr_max[i] = (10 - n) + i + 48;
		i++;
	}
	print_arr(arr, n, arr_max[0]);
	while (arr[0] != arr_max[0])
	{
		flag = n - 1;
		while (arr[flag] == arr_max[flag])
		flag--;
		base = ++(arr[flag]);
		while (flag < n)
			arr[flag++] = base++;
		print_arr(arr, n, arr_max[0]);
	}
}
