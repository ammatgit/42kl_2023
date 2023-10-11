/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:07:49 by yetan             #+#    #+#             */
/*   Updated: 2023/09/19 15:42:37 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include<stdio.h>

int	main(void)
{
	int x;
	int y;

	x = 10;
	y = 5;

	ft_ultimate_div_mod(&x, &y);
	printf("Division value after calling function: %d\n", x);
	printf("Remainder value after calling function: %d", y);
    return (0);
}
*/
