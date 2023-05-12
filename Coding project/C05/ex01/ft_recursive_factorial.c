/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:15:43 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/07 22:35:24 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (result < 0)
		return (0);
	if (result == 0)
		return (1);
	if (nb > 1)
	{
		return (result * (ft_recursive_factorial(nb - 1)));
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(0));
// }
