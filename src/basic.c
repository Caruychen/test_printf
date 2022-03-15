/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:35 by cchen             #+#    #+#             */
/*   Updated: 2022/03/15 21:47:04 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>

void	test_numbers(void)
{
	long long	n[] = {LONG_MIN, INT_MIN, SHRT_MIN, CHAR_MIN, -42,
			-1, 0 , 1, CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX, UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};

	for (int i = 0; i < 16; i++)
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
	specs_one_dbl("f conversion: %f\n", 42.42);
	specs_one_dbl("f conversion: %f\n", 2.3);
	specs_one_dbl("f conversion: %f\n", 1.2);
	specs_one_dbl("f conversion: %f\n", -42.42);
	specs_one_dbl("f conversion: %f\n", 9.9999997);
	specs_one_dbl("f conversion: %f\n", 9.999999);
	specs_one_dbl("f conversion: %f\n", 9.9999999);
	specs_one_dbl("f conversion: %f\n", 3.55);
	specs_one_dbl("f conversion: %f\n", 3.55 / 1.5);
	specs_one_dbl("f conversion: %f\n", 2.5555505f);
	specs_one_dbl("f conversion: %f\n", 2.5555515f);
	specs_one_dbl("f conversion: %f\n", 2.5555525f);
	specs_one_dbl("f conversion: %f\n", 2.5555535f);
	specs_one_dbl("f conversion: %f\n", 2.5555545f);
	specs_one_dbl("f conversion: %f\n", 2.5555555f);
	specs_one_dbl("f conversion: %f\n", 2.5555565f);
	specs_one_dbl("f conversion: %f\n", 2.5555534f);
	specs_one_dbl("f conversion: %f\n", 2.5555544f);
	specs_one_dbl("f conversion: %f\n", 2.5555554f);
	specs_one_dbl("f conversion: %f\n", 2.5555564f);
	specs_one_dbl("f conversion: %f\n", 2.5555536f);
	specs_one_dbl("f conversion: %f\n", 2.5555546f);
	specs_one_dbl("f conversion: %f\n", 2.5555556f);
	specs_one_dbl("f conversion: %f\n", 2.5555566f);
	specs_db_ldb_Ldb("{%f}{%lf}{%Lf}", 1444565444646.6465424242242, 1444565444646.6465424242242, 1444565444646.6465424242242l);
	specs_db_ldb_Ldb("{%f}{%lf}{%Lf}", -1444565444646.6465424242242454654, -1444565444646.6465424242242454654, -1444565444646.6465424242242454654l);
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
	specs_none("%");

	specs_one_int("test: % d\n", 42);
	specs_one_int("test: % +d\n", 42);
	specs_one_str("test: % st\n", "");
	specs_one_str("test: % st\n", "test");
	specs_one_int("test: % d\n", -42);
	printf("\nTesting chars, strings, pointers:\n");
	specs_one_char("1 c conversion: %c\n", 'c');
	specs_two_char("2 c conversion: %c %c\n", 'a', 'b');
	specs_one_str("1 String arg: %s\n", "Hello World");
	specs_two_str("2 String args: %s, %s\n", "s1", "s2");
	specs_two_str("2 String args: %s, %s", "s1", "s2");
	specs_one_str("1 String arg: %s\n", NULL);
	specs_one_ptr("p conversion\t%p\n", NULL);
	specs_one_ptr("p conversion\t%p", addr);

	printf("\nTesting numbers:\n");
	test_numbers();

	printf("\nTesting floating points:\n");
	test_floats_doubles();
	printf("\n\n");
	return (0);
}
