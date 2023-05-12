/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:02:43 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/08 22:34:08 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		arg = argv[i];
		while (arg[j])
		{
			j++;
		}
		write(1, arg, j);
		write(1, "\n", 1);
		i++;
	}
}
