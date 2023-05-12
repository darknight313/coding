/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:11:41 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 15:48:44 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	get;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			get = 1;
		else if (str[i] >= 'a' && str[i] <= 'z')
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

// int	main(void)
// {
// 	char arr[] = "WWFEFEF?";
// 	char *str = arr;
// 	int a = ft_str_is_alpha(str);
// 	printf("%d", a);
// }
