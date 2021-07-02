/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:51:32 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/02 10:20:21 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int	*tab, int	size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[a] < tab[b])
				ft_swap(&tab[a], &tab[b]);
			b++;
		}
		a++;
	}		
}

int main()
{
	int suite[7] = {26, 84, 12, 142, 4, 75, 100};
	ft_sort_int_tab(suite, 7);
	for (int i = 0 ; i < 7; i++)
    	printf(" %d, ", suite[i]);
	return (0);
}
