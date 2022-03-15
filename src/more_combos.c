/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_combos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:48:45 by cchen             #+#    #+#             */
/*   Updated: 2022/03/15 17:33:17 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_more(void)
{
	double values[] = { 3.14159265,
		3.0/256,
		0.01,
		-958.125,
		1.5,
		2.5,
		3.5,
		4.5,
		-1.5,
		-2.5,
		-3.5,
		-4.5,
		0.15,
		0.25,
		0.5,
		0.05,
		0.005,
		0.0005,
		-0.5,
		-0.05,
		-0.005,
		-0.0005,
		0.0,
		-0.0
	};

	printf("\nTesting additional option combinations and edge cases with integers\n");
	specs_two_int("Test { -1.0d} { -1.0i}: % -1.0d, % -1.0i", 0, 0);
	specs_one_int("Test %%#-1.0o: {%#-1.0o}", 0);
	specs_one_int("Test %%#-1.0u: {%#-1.0u}", 0);
	specs_one_int("Test %%#-1.0x: {%#-1.0x}", 0);
	specs_one_int("Test %%#-1.0X: {%#-1.0X}", 0);

	printf("\nTesting additional option combinations and edge cases with doubles\n");
	for (int i = 0; i < 24; i++)
	{
		printf("Testing number: %f\n", values[i]);
		specs_db_ldb_Ldb("Test %%#.f %%#.0f %%#.15Lf: %#.f %#.0f %#.15Lf\n", values[i], values[i], values[i]);
		specs_one_dbl("Test %.f\n", values[i]);
		specs_one_dbl("Test %%0 f: {%0 f}\n", values[i]);
		specs_one_dbl("Test %%+0f: {%#+0f}\n", values[i]);
		specs_one_dbl("Test %%010f: {%010f}\n", values[i]);
		specs_one_dbl("Test %%#010f: {%#010f}\n", values[i]);
		specs_one_dbl("Test %%0#10.1f: {%0#10.1f}\n", values[i]);
		specs_one_dbl("Test %%0 10f: {%0 10f}\n", values[i]);
		specs_one_dbl("Test %%+010f: {%+010f}\n", values[i]);
		specs_one_dbl("Test %%10.f: {%10.f}\n", values[i]);
		specs_one_dbl("Test %%10.0f: {%10.0f}\n", values[i]);
		specs_one_dbl("Test %%10.1f: {%10.1f}\n", values[i]);
		specs_one_dbl("Test %%10.10f: {%10.10f}\n", values[i]);
		specs_one_dbl("Test %%.2f: {%.2f}\n", values[i]);
		specs_one_dbl("Test %%.3f: {%.3f}\n", values[i]);
		specs_one_dbl("Test %%.4f: {%.4f}\n", values[i]);
		specs_one_dbl("Test %%.5f: {%.5f}\n", values[i]);
		specs_one_dbl("Test %%.6f: {%.6f}\n", values[i]);
		specs_one_dbl("Test %%f: {%f}\n", values[i]);
		specs_one_dbl("Test %%lf: {%lf}\n", values[i]);
		specs_one_dbl("Test %%.f: {%.f}\n", values[i]);
		specs_one_dbl("Test %%.0f: {%.0f}\n", values[i]);
		specs_one_dbl("Test %%.1f: {%.1f}\n", values[i]);
		specs_one_dbl("Test %%.10f: {%.10f}\n", values[i]);
		specs_one_dbl("Test %%.15f: {%.15f}\n", values[i]);
		printf("\n");
	}
}
