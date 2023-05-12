/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:00:48 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/05 00:19:11 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_reverse_number(int nb)
{
	int	reversed_num;

	reversed_num = 0;
	while (nb != 0)
	{
		reversed_num = (reversed_num * 10) + (nb % 10);
		nb /= 10;
	}
	return (reversed_num);
}

void	ft_write_num(char *str_num, int len, int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		write(1, "-", 1);
	while (i < len)
	{
		write(1, &str_num[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	str_num[20];
	int		len;

	if (nb == 0)
		write(1, "0", 1);
	len = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		str_num[len++] = nb % 10 + '0';
		nb /= 10;
	}
	while (len--)
		write(1, &str_num[len], 1);
}
