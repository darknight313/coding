/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:19:48 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/02 01:34:27 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	dest_length(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	x = dest_length(dest);
	i = 0;
	while (src[i])
	{
		dest[x] = src[i];
		x++;
		i++;
	}
	dest[x] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char src[] = "Hello";
// 	char dest[4] = {'1', '2', '3', '\0'};
// 	ft_strcat(dest, src);
// 	printf("%s", dest);
// }
