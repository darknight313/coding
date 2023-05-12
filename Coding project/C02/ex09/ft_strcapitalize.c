/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:19:19 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 23:48:38 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	turn_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	turn_lowercase(str);
	while (str[i])
	{
		if ((str[i - 1] < '0' || str[i - 1] > '9')
			&& (str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char src[] = "salut, comment tu vas ? 42mots
//	quarante-deux;cinquante+et+un";
// 	char *str = src;
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }
