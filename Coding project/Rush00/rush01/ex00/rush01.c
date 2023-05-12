/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 11:18:55 by mufitozo          #+#    #+#             */
/*   Updated: 2023/04/26 11:57:55 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(char c);

void	print_sides(int x)
{
	int	j;

	j = 1;
	ft_putchar('\n');
	ft_putchar('*');
	if (x > 1)
	{
		while (j <= x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('*');
	}
}

void	print_last_line(int x)
{
	int	g;

	g = 1;
	ft_putchar('\n');
	ft_putchar('\\');
	while (g <= x - 2)
	{
		ft_putchar('*');
		g++;
	}
	if (x > 1)
		ft_putchar('/');
}

void	print_first_line(int x)
{
	int	k;

	k = 1;
	ft_putchar('/');
	while (k <= x - 2)
	{
		ft_putchar('*');
		k++;
	}
	ft_putchar('\\');
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		write(1, "Error: Invalid Value\n", 22);
	else
	{
		i = 1;
		if (x > 1)
			print_first_line(x);
		else
			ft_putchar('/');
		if (y > 1)
		{
			while (i <= y - 2)
			{
				print_sides(x);
				i++;
			}
			print_last_line(x);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	return (0);
}
