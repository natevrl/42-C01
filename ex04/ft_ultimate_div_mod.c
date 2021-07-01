/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 15:05:53 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/01 16:42:11 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	printf("%d\n", *a);
	c = *a / *b;
	printf("%d\n", *b);
	*b = *a % *b;
	*a = c;
	printf("%d\n", *b);
	printf("%d\n", *a);
}

int	main(void)
{
	int	i = 43;
	int	n = 10;
	ft_ultimate_div_mod(&i, &n);	
}
