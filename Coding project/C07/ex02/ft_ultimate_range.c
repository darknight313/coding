/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:37:26 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/09 15:40:41 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*a;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	a = (int *)(malloc)(size * sizeof(int));
	if (a == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	*range = a;
	return (size);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int *arr;
// 	int min = 2;
// 	int max = 2347;
// 	int size = max - min;
// 	ft_ultimate_range(&arr, min, max);
// 	printf("%d\n", ft_ultimate_range(&arr, min, max));

// 	for (int i = 0; i < size; i++)
// 	{
// 		printf("%d, ", arr[i]);
// 	}
// 	free(arr);
// }
