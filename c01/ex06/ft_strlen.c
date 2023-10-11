/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetan <yetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:32:52 by yetan             #+#    #+#             */
/*   Updated: 2023/09/21 14:50:56 by yetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include<stdio.h>

int	main(void)
{
	char	 str[15] = "Hello 42";

	printf("Total length of the passed strings is: %d\n", ft_strlen(str));
	return (0);
}
*/
