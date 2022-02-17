/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:35 by cchen             #+#    #+#             */
/*   Updated: 2022/02/17 15:02:37 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_numbers(void)
{
	int	n[] = {-42, -1, 0 , 1, 42};

	for (int i = 0; i < 5; i++)
	{
		ft_printf("d conversion: %d\n", n[i]);
		printf("d conversion: %d\n", n[i]);

		ft_printf("i conversion: %i\n", n[i]);
		printf("i conversion: %i\n", n[i]);

		ft_printf("o conversion: %o\n", n[i]);
		printf("o conversion: %o\n", n[i]);

		ft_printf("u conversion: %u\n", n[i]);
		printf("u conversion: %u\n", n[i]);

		ft_printf("x conversion: %x\n", n[i]);
		printf("x conversion: %x\n", n[i]);

		ft_printf("X conversion: %X\n", n[i]);
		printf("X conversion: %X\n", n[i]);
	}
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
