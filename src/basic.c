/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:35 by cchen             #+#    #+#             */
/*   Updated: 2022/03/04 16:49:27 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>

void	test_numbers(void)
{
	long long	n[] = {LONG_MIN, INT_MIN, SHRT_MIN, CHAR_MIN,
			-1, 0 , 1, CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX, UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};

	for (int i = 0; i < 15; i++)
	{
		specs_one_int("d conversion:\t%d\n", n[i]);
		specs_one_int("i conversion:\t%i\n", n[i]);
		specs_one_int("o conversion:\t%o\n", n[i]);
		specs_one_int("u conversion:\t%u\n", n[i]);
		specs_one_int("x conversion:\t%x\n", n[i]);
		specs_one_int("X conversion:\t%X\n", n[i]);
		printf("\n");
	}
}

void	test_floats_doubles(void)
{
	printf("%f\n", 42.42);
	ft_printf("%f\n", 42.42);
	ft_printf("%f\n", 2.3);
	ft_printf("%f\n", 1.2);
	ft_printf("%f\n", -42.42);
	ft_printf("%f\n", 9.9999997);
	printf("%f\n", 9.9999997);
	ft_printf("%f\n", 2.5555545f);
	printf("%f\n", 2.5555545f);
	ft_printf("%f\n", 3.55);
	printf("%f\n", 3.55);
	ft_printf("%f\n", 3.55 / 1.5);
	printf("%f\n", 3.55 / 1.5);
}

int	test_basic(void)
{
	char	*addr = "foo";

	print_title("--- Basic Tests ---\n");
	printf("Tests with basic specifiers: %%, c, s, p, d, i, o, u, x, X, f\n");
	printf("Testing format only:\n");
	specs_none("%%");
	specs_none("");
	specs_none("Hello World\n");

	printf("\nTesting chars, strings, pointers:\n");
	specs_one_char("1 c conversion: %c\n", 'c');
	specs_two_char("2 c conversion: %c %c\n", 'a', 'b');
	specs_one_str("1 String arg: %s\n", "Hello World");
	specs_two_str("2 String args: %s, %s\n", "s1", "s2");
	specs_two_str("2 String args: %s, %s", "s1", "s2");
	specs_one_ptr("p conversion\t%p\n", NULL);
	specs_one_ptr("p conversion\t%p", addr);

	printf("\nTesting numbers:\n");
	test_numbers();

	printf("\nTesting floating points:\n");
	test_floats_doubles();
	printf("\n\n");
	return (0);
}
