/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:23:35 by cchen             #+#    #+#             */
/*   Updated: 2022/02/27 10:28:28 by cchen            ###   ########.fr       */
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
	}
}

int	test_basic(void)
{
	char	*addr = "foo";

	printf("--- Checking Basic Tests ---\n");
	printf("Iterating on specifiers: %%, c, s, p, d, i, o, u, x, X, f\n");
	specs_none("%%");
	specs_none("");
	specs_none("Hello World\n");
	specs_one_char("1 c conversion: %c\n", 'c');
	specs_two_char("2 c conversion: %c %c\n", 'a', 'b');
	specs_one_str("1 String arg: %s\n", "Hello World");
	specs_two_str("2 String args: %s, %s\n", "s1", "s2");
	specs_two_str("2 String args: %s, %s", "s1", "s2");
	test_numbers();
	specs_one_ptr("p conversion\t%p\n", NULL);
	specs_one_ptr("p conversion\t%p", addr);
	printf("\n");
	return (0);
}
