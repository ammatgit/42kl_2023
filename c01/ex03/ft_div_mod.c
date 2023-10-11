/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:10:14 by yetan             #+#    #+#             */
/*   Updated: 2023/09/19 14:57:13 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>

int main(void)
{
	int	a;
	int	b;
	int x;
	int y;

	a = 10;
	b = 5;
	x = 1;
	y = 1;

	printf(" x | y value before calling function: %d | %d \n", x, y);
	ft_div_mod(a, b, &x, &y);
	printf(" x | y value after calling function: %d | %d", x, y);
}
*/
