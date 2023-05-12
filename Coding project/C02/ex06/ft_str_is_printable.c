/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 19:59:26 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 16:55:30 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	get;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
// 	char arr[] = "DDDDERREsRR\nE";
// 	char *str = arr;
// 	int a = ft_str_is_printable(str);
// 	printf("%d", a);
// }
