/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:12:40 by cchen             #+#    #+#             */
/*   Updated: 2022/03/08 13:09:33 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_precision(void)
{
	printf("\nTesting precision specifier\n");
	specs_one_int("Test .d: %.d\n", 42);
	specs_one_int("Test .1d: %.1d\n", 42);
	specs_one_int("Test .2d: %.2d\n", 42);
	specs_one_int("Test .4d: %.4d\n", 42);
	specs_one_dbl("Test .f: %.f\n", 42.42);
	specs_one_dbl("Test .1f: %.1f\n", 42.42);
	specs_one_dbl("Test .2f: %.2f\n", 42.42);
	specs_one_dbl("Test .4f: %.4f\n", 42.42);
	specs_one_dbl("Test .8f: %.8f\n", 42.42);
	specs_one_str("Test .s: %.s\n", "Hello");
	specs_one_str("Test .2s: %.2s\n", "Hello");
	specs_one_str("Test .5s: %.5s\n", "Hello");
	specs_one_str("Test .8s: %.8s\n", "Hello");
	specs_one_str("Test .2s: %.2s\n", (char *)NULL);
	specs_two_int("@moulitest: %#d %#.d", 0, 0);
	specs_two_int("@moulitest: %#x %#.x", 0, 0);
	specs_two_int("@moulitest: %x %.x", 0, 0);
	specs_two_int("@moulitest: %#.x %#.0x", 0, 0);
	specs_two_int("@moulitest: %.x %.0x", 0, 0);
	specs_two_int("@moulitest: %5.x %5.0x", 0, 0);
	return (0);
}
