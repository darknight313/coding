/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 20:15:49 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/30 15:48:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		else
		{
			str[i] += 0;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>

// int main(void)
// {
// 	char arr[] = "ABCDGbTZ";
// 	char *str = arr;
// 	ft_strlowcase(str);
// 	printf("%s", str);
// }
