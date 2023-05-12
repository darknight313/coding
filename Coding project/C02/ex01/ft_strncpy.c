/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:57:24 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/09 23:34:17 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	times;

	times = n;
	i = 0;
	while (i < times && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < times)
	{
		dest[i] = '0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char src[] = "anton";
    char dest[20] = "sieben";

	ft_strncpy (dest, src, 20);
	printf("%s\n", dest);
	return (0);
}
