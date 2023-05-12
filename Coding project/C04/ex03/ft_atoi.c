/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 22:15:10 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/06 23:16:47 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg_count;
	int	result;

	result = 0;
	neg_count = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' \
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg_count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (neg_count % 2 == 0)
			result = result * 10 + (str[i] - 48);
		else
			result = result * 10 + (str[i] - 48) * -1;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char str[] = " \n -42";
// 	printf("%d", ft_atoi(str));
// }
