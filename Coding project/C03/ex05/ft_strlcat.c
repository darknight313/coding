/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 13:59:35 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/11 23:10:39 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	arr_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	len_d;
	unsigned int	len_s;

	x = 0;
	i = arr_len(dest);
	len_d = arr_len(dest);
	len_s = arr_len(src);
	if (size < 1)
		return (len_s);
	while (src[x] && i < size - 1)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	if (size < len_d)
		return (len_s + size);
	else
		return (len_d + len_s);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int n;
	char	dest[20] = "Hello";
	char	src[] = " world!";

	n = ft_strlcat(dest, src, 1);
	printf("%d\n", n);
}
