/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:35 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 11:44:21 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_numbers(void)
{
	int	n[] = {-42, -1, 0 , 1, 42};

	for (int i = 0; i < 5; i++)
	{
		ft_printf("ft_printf d conversion:\t%d\n", n[i]);
		printf("printf d conversion:\t%d\n", n[i]);

		ft_printf("ft_printf i conversion:\t%i\n", n[i]);
		printf("printf i conversion:\t%i\n", n[i]);

		ft_printf("ft_printf o conversion:\t%o\n", n[i]);
		printf("printf o conversion:\t%o\n", n[i]);

		ft_printf("ft_printf u conversion:\t%u\n", n[i]);
		printf("printf u conversion:\t%u\n", n[i]);

		ft_printf("ft_printf x conversion:\t%x\n", n[i]);
		printf("printf x conversion:\t%x\n", n[i]);

		ft_printf("ft_printf X conversion:\t%X\n", n[i]);
		printf("printf X conversion:\t%X\n", n[i]);
	}

	ft_printf("ft_printf conversion\t%p\n", NULL);
	printf("printf conversion\t%p\n", NULL);

	ft_printf("ft_printf conversion\t%p\n", n);
	printf("printf conversion\t%p\n", n);
}

int	test_basic(void)
{
	ft_printf("");
	printf("");
	ft_printf("Hello World\n");
	printf("Hello World\n");

	ft_printf("1 c conversion: %c\n", 'c');
	printf("1 c conversion: %c\n", 'c');

	ft_printf("2 c conversion: %c %c\n", 'a', 'b');
	printf("2 c conversion: %c %c\n", 'a', 'b');

	ft_printf("1 String arg: %s\n", "Hello World");
	printf("1 String arg: %s\n", "Hello World");

	ft_printf("2 String args: %s, %s\n", "s1", "s2");
	printf("2 String args: %s, %s\n", "s1", "s2");

	test_numbers();
	return (0);
}
