/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 17:53:11 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/10 17:39:07 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr)
{
	char	str[20];
	int		i;

	i = 0;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nbr == 0)
		write (1, "0", 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr != 0)
	{
		str[i++] = (nbr % 10) + 48;
		nbr /= 10;
	}
	i = ft_len(str) - 1;
	while (i >= 0)
		write(1, &str[i--], 1);
}
