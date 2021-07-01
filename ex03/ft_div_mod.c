/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:46:53 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/01 15:04:00 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	printf("%d\n", *div);
	*mod = a % b;
	printf("%d\n", *mod);
}

int	main()
{
	int	i = 42;
	int	n = 10;
	ft_div_mod(i, n, &i, &n);
}
