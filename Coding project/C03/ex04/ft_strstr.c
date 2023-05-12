/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 23:07:09 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/11 19:07:55 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	l;
	int	j;
	int	l2;

	l = 0;
	j = 0;
	l2 = 0;
	while (to_find[l2])
		l2++;
	if (l2 == 0)
		return (str);
	while (str[l] != '\0')
	{
		if (str[l] != to_find[j])
			j = 0;
		if (str[l] == to_find[j])
			j++;
		if (j == l2)
			return (&str[l - j + 1]);
		l++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello";
	char to_find[] = "elt";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
}
