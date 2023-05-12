/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:38:41 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 15:48:37 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	get;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			get = 1;
		else
		{
			get = 0;
			break ;
		}
		i++;
	}
	if (!str[i])
	{
		get = 1;
	}
	return (get);
}

// #include <stdio.h>

// int main(void)
// {
// 	char arr[] = "0";
// 	char *str = arr;
// 	int a = ft_str_is_numeric(str);
// 	printf("%d", a);
// }
