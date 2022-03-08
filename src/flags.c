/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:38:33 by cchen             #+#    #+#             */
/*   Updated: 2022/03/08 12:04:51 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_flags(void)
{
	specs_one_int("Test #o flag: %#o\n", 42);
	specs_one_int("Test ##o flag: %##o\n", 42);
	specs_one_int("Test 0o flag: %0o\n", 42);
	specs_one_int("Test #0o flag: %#0o\n", 42);
	specs_one_int("Test #x flag: %#x\n", 42);
	specs_one_int("Test #X flag: %#X\n", 42);
	specs_one_int("%#8x", 42);
	specs_one_int("%#08x", 42);
	specs_one_int("%#-08x", 42);
	specs_one_long("%#llx", 9223372036854775807);
	return (0);
}
