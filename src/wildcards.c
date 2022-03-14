/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wildcards.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:24:53 by cchen             #+#    #+#             */
/*   Updated: 2022/03/14 14:18:14 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	wildcard_basic(void)
{
	specs_two_int("Test *d positive %*d", 5, 42);
	specs_two_int("Test *d negative {%*d}", -5, 42);
	specs_two_int("Test *d zero {%*d}", 0, 42);
	specs_two_int("Test *c zero {%*c}", 0, 0);
	specs_two_int("Test *c negative {%*c}", -15, 0);
	specs_two_int("Test .*d positive {%.*d}", 5, 42);
	specs_two_int("Test .*d negative {%.*d}", -5, 42);
	specs_two_int("Test .*d zero {%.*d}", 0, 42);
	specs_int_str("Test .*s positive {%.*s}", 5, "42");
	specs_int_str("Test .*s negative {%.*s}", -5, "42");
	specs_int_str("Test .*s zero {%.*s}", 0, "42");
	specs_two_int("Test *s positive {%*s}", 5, 0);
	specs_two_int("Test *p positive {%*p}", 10, 0);
}

void	test_wildcards(void)
{
	printf("\nTesting basic wildcard specifiers\n");
	wildcard_basic();

	printf("\nTesting multi spec wildcard specifiers\n");
	specs_three_int("%*.*d", 0, 3, 0);

	printf("\nTesting mixed spec flags wildcard specifiers\n");
	specs_two_int("Test *3d positive {%*3d}", 5, 0);
	specs_two_int("Test 05.*d negative {%05.*d}", -15, 42);
	specs_two_int("Test 05.*d positive {%05.*d}", 15, 42);
}
