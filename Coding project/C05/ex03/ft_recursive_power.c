/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:49:40 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/07 22:45:47 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
	{
		return (0);
	}
	if (power > 1)
	{
		return (result * ft_recursive_power(nb, power - 1));
	}
	return (result);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", ft_recursive_power(2, 30));
// }
