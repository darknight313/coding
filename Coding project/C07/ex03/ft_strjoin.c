/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:28:59 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/12 08:02:41 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*str_cat(char *dest, char *src, char *sep)
{
	int	i;
	int	dest_len;

	dest_len = ft_len(dest);
	i = 0;
	if (dest_len > 0 && ft_len(src) > 0)
	{
		while (sep[i] != '\0')
		{
			dest[dest_len] = sep[i];
			dest_len++;
			i++;
		}
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char*sep)
{
	char	*new_arr;
	int		total;
	int		i;

	i = 0;
	total = 0;
	if (size <= 0)
	{
		new_arr = (char *)(malloc)(1);
		new_arr[0] = '\0';
		return (new_arr);
	}
	while (i < size)
		total += ft_len(strs[i++]);
	if (size > 1)
		total += ft_len(sep) + (size - 1);
	new_arr = (char *)(malloc)(total + 1);
	i = 0;
	while (i < size)
	{
		str_cat(new_arr, strs[i], sep);
		i++;
	}
	new_arr[total] = '\0';
	return (new_arr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char sep[] = ",";
// 	char *nested_arr[10] = {"123", "456", "678"};
// 	char *new_arr = ft_strjoin(1, nested_arr, sep);
// 	printf("%s\n", new_arr);
// 	free(new_arr);
// }
