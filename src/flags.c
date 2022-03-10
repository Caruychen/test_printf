/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:38:33 by cchen             #+#    #+#             */
/*   Updated: 2022/03/10 16:54:33 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_flags(void)
{
	printf("\nTesting flag specifiers\n");
	specs_one_int("Test #o flag: %#o\n", 42);
	specs_one_int("Test ##o flag: %##o\n", 42);
	specs_one_int("Test 0o flag: %0o\n", 42);
	specs_one_int("Test #0o flag: %#0o\n", 42);
	specs_one_int("Test #x flag: %#x\n", 42);
	specs_one_int("Test #X flag: %#X\n", 42);
	specs_one_int("Test #8d: %#8d", 42);
	specs_one_int("Test #8o: %#8o", 42);
	specs_one_int("Test #8x: %#8x", 42);
	specs_one_int("Test #8X: %#8X", 42);
	specs_one_int("Test #8.2o: %#8.2o", 42);
	specs_one_int("Test #8.2x: %#8.2x", 42);
	specs_one_int("Test #8.2X: %#8.2X", 42);
	specs_one_int("Test #2.8o: %#2.8o", 42);
	specs_one_int("Test #2.8x: %#2.8x", 42);
	specs_one_int("Test #2.8X: %#2.8X", 42);
	specs_one_int("Test #08d: %#08d", 42);
	specs_one_int("Test #08o: %#08o", 42);
	specs_one_int("Test #08x: %#08x", 42);
	specs_one_int("Test #08X: %#08X", 42);
	specs_one_int("Test #08.2o: %#08.2o", 42);
	specs_one_int("Test #08.2x: %#08.2x", 42);
	specs_one_int("Test #08.2X: %#08.2X", 42);
	specs_one_int("Test #02.8o: %#02.8o", 42);
	specs_one_int("Test #02.8x: %#02.8x", 42);
	specs_one_int("Test #02.8X: %#02.8X", 42);
	specs_one_int("Test #-08d: %#-08d", 42);
	specs_one_int("Test #-08o: %#-08o", 42);
	specs_one_int("Test #-08x: %#-08x", 42);
	specs_one_int("Test #-08X: %#-08X", 42);
	specs_one_long("Test #llx: %#llx", 9223372036854775807);
	specs_one_int("Test {+03d}: {%+03d}", 0);
	specs_one_int("Test { 03d}: {% 03d}", 0);
	specs_one_int("Test {0-3d}: {%0-3d}", 0);
	specs_one_int("Test 03d: %03d", 0);
	specs_one_int("Test 03i: %03i", 0);
	return (0);
}
