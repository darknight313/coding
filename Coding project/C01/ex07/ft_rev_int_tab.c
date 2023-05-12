/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashirzad <ashirzad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 02:25:47 by ashirzad          #+#    #+#             */
/*   Updated: 2023/04/27 21:41:20 by ashirzad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	reverse_count;
	int	temp;

	count = 0;
	reverse_count = (size - 1);
	while (count < reverse_count)
	{
		temp = tab[count];
		tab[count] = tab[reverse_count];
		tab[reverse_count] = temp;
		count++;
		reverse_count--;
	}
}
