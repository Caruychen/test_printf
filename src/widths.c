/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   widths.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:01:03 by cchen             #+#    #+#             */
/*   Updated: 2022/03/14 20:53:56 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	test_widths_str(void)
{
	printf("\nTesting field width spec on strings\n");
	specs_one_str("%10s is a string\n", "this");
	specs_one_str("%5.2s is a string", "this");
	specs_one_str("%10s is a string", "");
	specs_one_str("%5.2s is a string", "");
	specs_one_str("%-10s is a string", "this");
	specs_one_str("%-5.2s is a string", "this");
	specs_one_str("%-10s is a string", "");
	specs_one_str("%-5.2s is a string", "");
}

int	test_widths(void)
{
	printf("\nTesting field width specifiers\n");
	specs_none("%5%\n");
	specs_none("%-5%\n");
	specs_one_char("%5c\n", 'c');
	specs_one_char("%-5c\n", 'c');
	specs_one_int("%10d\n", 42);
	specs_one_int("%10x\n", 42);
	specs_one_int("%-10d\n", 42);
	specs_one_int("%-10x\n", 42);
	specs_one_int("%-15x\n", 542);
	specs_one_int("%1d\n", 42);
	specs_one_int("%10.10d\n", 42);
	specs_one_int("%10.11d\n", 42);
	specs_one_int("%11.10d\n", 42);
	specs_one_int("%#10d\n", 42);
	specs_one_int("%010d\n", 42);
	specs_one_int("%#010d\n", 42);
	specs_one_dbl("%10f\n", 42.42);
	specs_one_dbl("%10.10f\n", 42.42);
	specs_one_dbl("%10.0f\n", 42.42);
	specs_one_dbl("%1f\n", 42.42);
	specs_one_dbl("%15f\n", 42.42);
	specs_one_dbl("%15.7f\n", 42.42);
	specs_one_dbl("%15.0f\n", 42.42);
	specs_one_dbl("%-10f\n", 42.42);
	specs_one_dbl("%-10.10f\n", 42.42);
	specs_one_dbl("%-10.0f\n", 42.42);
	specs_one_dbl("%-1f\n", 42.42);
	specs_one_dbl("%-15f\n", 42.42);
	specs_one_dbl("%-15.7f\n", 42.42);
	specs_one_dbl("%-15.0f\n", 42.42);
	specs_one_int("Test 3d: %3d", 0);
	specs_one_int("Test 3i: %3i", 0);
	specs_one_int("Test 5p: {%5p}", 0);
	specs_one_int("Test -15p: {%-15p}", 0);
	specs_one_int("Test 3u: %3u", 0);
	specs_one_int("Test -3u: %-3u", 0);
	specs_one_int("Test 3x: %3x", 0);
	specs_one_int("Test -3x: %-3x", 0);
	specs_one_int("Test 3X: %3X", 0);
	specs_one_int("Test -3X: %-3X", 0);
	test_widths_str();
	return (0);
}
