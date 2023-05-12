/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 22:52:11 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/02 21:36:16 by ashirzad         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len1;
	unsigned int	len2;

	len1 = dest_length(dest);
	len2 = 0;
	while (src[len2] && len2 < nb)
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char src[] = " 456";
// 	char dest[8] = "123";
// 	strncat(dest, src, -1);
// 	printf("%s", dest);
// }
