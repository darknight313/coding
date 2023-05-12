/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:56:43 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 15:55:02 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	get;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
// 	char arr[] = "";
// 	char *str = arr;
// 	int a = ft_str_is_lowercase(str);
// 	printf("%d", a);
// }
