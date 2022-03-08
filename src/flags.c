/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:38:33 by cchen             #+#    #+#             */
/*   Updated: 2022/03/08 16:11:49 by cchen            ###   ########.fr       */
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
	specs_one_int("%#8d", 42);
	specs_one_int("%#8o", 42);
	specs_one_int("%#8x", 42);
	specs_one_int("%#8X", 42);
	specs_one_int("%#8.2o", 42);
	specs_one_int("%#8.2x", 42);
	specs_one_int("%#8.2X", 42);
	specs_one_int("%#2.8o", 42);
	specs_one_int("%#2.8x", 42);
	specs_one_int("%#2.8X", 42);
	specs_one_int("%#08d", 42);
	specs_one_int("%#08o", 42);
	specs_one_int("%#08x", 42);
	specs_one_int("%#08X", 42);
	specs_one_int("%#08.2o", 42);
	specs_one_int("%#08.2x", 42);
	specs_one_int("Test #08.2X: %#08.2X", 42);
	specs_one_int("%#02.8o", 42);
	specs_one_int("%#02.8x", 42);
	specs_one_int("%#02.8X", 42);
	specs_one_int("%#-08d", 42);
	specs_one_int("%#-08o", 42);
	specs_one_int("%#-08x", 42);
	specs_one_int("%#-08X", 42);
	specs_one_long("%#llx", 9223372036854775807);
	return (0);
}
