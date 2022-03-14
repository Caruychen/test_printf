/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_combos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:48:45 by cchen             #+#    #+#             */
/*   Updated: 2022/03/14 22:02:50 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_more(void)
{
	double dbl = 3.14159265;

	printf("\nTesting additional option combinations and edge cases\n");
	specs_two_int("Test { -1.0d} { -1.0i}: % -1.0d, % -1.0i", 0, 0);
	specs_db_ldb_Ldb("Test %%#.f %%#.0f %%#.15Lf: %#.f %#.0f %#.15Lf\n", dbl, dbl, dbl);
	specs_one_dbl("Test %.f\n",dbl);
	specs_one_dbl("Test %%0 f: {%0 f}\n", dbl);
	specs_one_dbl("Test %%+0f: {%#+0f}\n", dbl);
	specs_one_dbl("Test %%010f: {%010f}\n", dbl);
	specs_one_dbl("Test %%#010f: {%#010f}\n", dbl);
	specs_one_dbl("Test %%0#10.1f: {%0#10.1f}\n", dbl);
	specs_one_dbl("Test %%0 10f: {%0 10f}\n", dbl);
	specs_one_dbl("Test %%+010f: {%+010f}\n", dbl);
}
