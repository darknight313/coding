/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:44:35 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/25 16:27:29 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char num1, char num2, char num3, int *run)
{
	char	sum_str[3];

	sum_str[0] = num1 + '0';
	sum_str[1] = num2 + '0';
	sum_str[2] = num3 + '0';
	write(1, sum_str, 3);
	*run += 1;
	if (*run < 120)
		write(1, ", ", 2);
}

void	ft_nums(int *num1, int *num2, int *num3)
{
	*num3 += 1;
	if (*num3 > 9)
	{
		*num2 += 1;
		*num3 = *num2 + 1;
	}
	if (*num2 > 8)
	{
		*num1 += 1;
		*num2 = *num1 + 1;
		*num3 = *num2 + 1;
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	run;

	num1 = 0;
	num2 = 1;
	num3 = 2;
	run = 0;
	while (num1 <= 7)
	{
		while (num2 <= 8)
		{
			while (num3 <= 9)
			{
				ft_print(num1, num2, num3, &run);
				ft_nums(&num1, &num2, &num3);
			}
		}
	}
}
