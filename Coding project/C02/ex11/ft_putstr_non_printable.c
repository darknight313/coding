/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:43:06 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/01 21:14:53 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	hex[3];
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127 || str[i] < -128)
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(unsigned char)str[i] / 16];
			hex[2] = "0123456789abcdef"[(unsigned char)str[i] % 16];
			write(1, hex, 3);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
