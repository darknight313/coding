/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:46:50 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/09 20:47:21 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	while (i <= (nb / i))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next_pri;

	next_pri = nb;
	if (nb < 0)
		return (2);
	while (!is_prime(next_pri))
	{
		next_pri++;
	}
	return (next_pri);
}

// #include <stdio.h>

// int main() {
//     int number = -1111111;
//     int nextPrime = ft_find_next_prime(number);
//     printf("The next prime number after %d is %d\n", number, nextPrime);

//     return 0;
// }
