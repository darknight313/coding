/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:13:34 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/07 23:15:02 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	prev_x;

	if (nb == 0 || nb == 1)
		return (nb);
	prev_x = 0;
	x = nb / 2;
	while (x > nb / x)
	{
		prev_x = x;
		x = (x + nb / x) / 2;
		if (x == prev_x)
		{
			return (0);
		}
	}
	if (x * x == nb)
		return (x);
	else
		return (0);
	return (x);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%i", ft_sqrt(2147395600));
// }
