/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:51:32 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/01 21:53:41 by nbenhado         ###   ########.fr       */
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

void ft_sort_int_tab(int *tab, int size)
{
	int tri = 0;
	int a = 0;
	int b = 1;
	while(tab[b] != '\0')
		if (tab[a] > tab[b])
		{
			ft_swap(&tab[a], &tab[b]);
			a++;
			b++;
		}
}

int main()
{
	int suite[4] = {1, 2, 3, 4};
	ft_sort_int_tab(suite, 4);
	printf("%d\n", ft_sort_int_tab);
	return (0);
}
