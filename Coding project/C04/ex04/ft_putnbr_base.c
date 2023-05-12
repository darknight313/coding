/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 23:10:58 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/11 14:49:30 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_len(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	reverse_str(char *str, int len)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	str[len] = '\0';
}

void	print_zero(int nbr)
{
	nbr += '0';
	write (1, &nbr, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	hex[36];
	int		i;
	long	nbr2;

	i = 0;
	nbr2 = nbr;
	if (nbr == 0)
		print_zero(nbr);
	if (ft_valid(base) == 0)
		return ;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 *= -1;
	}
	while (nbr2 > 0)
	{
		hex[i++] = base[nbr2 % base_len(base)];
		nbr2 /= base_len(base);
	}
	reverse_str(hex, i);
	write(1, hex, i);
}
