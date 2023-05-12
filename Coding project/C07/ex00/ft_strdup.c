/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 14:44:12 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/09 15:09:43 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	arr_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*str;
	int		i;

	size = arr_len(src);
	str = (char *) malloc(size);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char arr1[] = "";
// 	char *arr2 = ft_strdup(arr1);
// 	printf("%s\n", arr2);
// 	printf("%s\n", arr1);
// }
