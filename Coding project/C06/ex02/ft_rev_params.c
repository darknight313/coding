/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_rev_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 11:13:14 by ashirzad          #+#    #+#             */
/*   Updated: 2023/05/08 22:53:19 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*arg;
	int		j;

	i = (argc - 1);
	while (i != 0)
	{
		j = 0;
		arg = argv[i];
		while (arg[j])
		{
			j++;
		}
		write(1, arg, j);
		write(1, "\n", 1);
		i--;
	}
}
