/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 11:43:32 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/09 22:02:03 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

char	ft_helper(char c, unsigned int n)
{
	char result;

	result = 0;
	if (n == 0)
		result = c / 10 + '0';
	else
		result = c % 10 + '0';
	return (result);
}

void	ft_print_comb2(void)
{
	char	a;
	char 	b;
	a = 0;
	while (a <= 99)
	{
		ft_putchar(ft_helper(a, 0));
		ft_putchar(ft_helper(a, 1));
		ft_putchar(' ');
		ft_putchar(ft_helper(b, 0));
		ft_putchar(ft_helper(b, 1));
		if (!(a == 98 && b == 99))
			write(1, ", ", 2);
		b++;
	}
	a++;
}

int	main(void)
{
	ft_print_comb2();
}
