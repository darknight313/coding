/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:54:16 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/04 17:32:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;

	j = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[j] == s2[j] && (j < n - 1) && s1[j])
	{
		j++;
	}
	return (s1[j] - s2[j]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "03215";
	char s2[] = "21045";
	int a = ft_strncmp(s1, s2, -1);
	printf("%d", a);
}
