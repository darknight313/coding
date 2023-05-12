/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 21:47:22 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/08 22:50:09 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int n, char *arr[])
{
	int	i;
	int	j;

	i = 0;
	while (i < (n - 1))
	{
		j = 0;
		while (j < n - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				ft_swap(&arr[j], &arr[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*arg;
	int		i;
	int		j;

	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		arg = argv[i];
		while (arg[j])
		{
			j++;
		}
		write(1, arg, j);
		write(1, "\n", 1);
		i++;
	}
}
