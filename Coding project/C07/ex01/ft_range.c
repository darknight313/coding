/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 19:33:22 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/09 15:24:14 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	a = (int *)(malloc((max - min) * 4));
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *a = ft_range(100, 1);

// 	printf("%d\n", *a);
// 	free(a);
// }
