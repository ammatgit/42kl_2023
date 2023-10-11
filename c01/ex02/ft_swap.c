/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:52:17 by yetan             #+#    #+#             */
/*   Updated: 2023/09/19 14:34:15 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include<stdio.h>

int	main(void)
{
	int	x;
	int y;

	x = 2;
	y = 3;
	printf("x | y value before calling function: %d |  %d\n", x, y);
	ft_swap( &x, &y);
	printf("x | Y value after callinf function : %d	| %d", x, y);
	return (0);
}
*/
