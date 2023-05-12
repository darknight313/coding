/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:58:22 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/07 22:52:43 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (2 > index)
	{
		return (index);
	}
	result = result + ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_fibonacci(0));
// }
