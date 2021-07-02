/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:20:55 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/02 11:07:50 by nbenhado         ###   ########.fr       */
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

void	ft_rev_int_tab(int	*tab, int	size)
{
	int	a;

	a = 0;
	while (size != a + 1 && size != a)
	{
		ft_swap(&tab[a], &tab[size - 1]);
		size--;
		a++;
	}
}

int	main(void)
{
    int suite[9] = {1, 5, 2, 3, 4, 8, 8, 8, 7};
    ft_rev_int_tab(suite, 9);
    for(int i = 0; i < 9; i++)
    printf(" %d, ", suite[i]);
    return (0);
}
