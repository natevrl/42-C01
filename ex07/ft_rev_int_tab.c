/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:20:55 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/01 21:40:37 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{

	while(size >  0)
	{
		int a = tab[size-1];
		a = a + 48;
		write(1, &a, 1);
		size--;
	}
}

int main()
{
	int i = 4;
	int suite[5] = {1 , 5, 2, 3, 4};
	ft_rev_int_tab(suite, 5);
	return (0);
}
