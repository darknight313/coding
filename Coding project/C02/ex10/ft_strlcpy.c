/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 10:55:26 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/06 18:17:13 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen_arr(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_len;
	int	i;
	int	times;

	times = size;
	i = 0;
	src_len = strlen_arr(src);
	if (size > 0)
	{
		while (i < (times - 1) && i < src_len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

#include <stdio.h>

int main()
{
    char	src[] = "456    ";
    char	dest[] = "123";
    ft_strlcpy(dest, src, 4);

    printf("dest: %s\n", dest);

    return 0;
}
