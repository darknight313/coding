/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:43:46 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/07 22:44:33 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", ft_iterative_power(2, 30));
// }
