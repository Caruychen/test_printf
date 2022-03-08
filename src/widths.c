/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   widths.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:01:03 by cchen             #+#    #+#             */
/*   Updated: 2022/03/08 12:02:07 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	test_widths(void)
{
	printf("\nTesting field width specifiers\n");
	specs_none("%5%\n");
	specs_none("%-5%\n");
	specs_one_int("%10d\n", 42);
	specs_one_int("%10x\n", 42);
	specs_one_int("%-10d\n", 42);
	specs_one_int("%-10x\n", 42);
	specs_one_int("%-15x\n", 542);
	specs_one_int("%1d\n", 42);
	specs_one_int("%10.10d\n", 42);
	specs_one_int("%10.11d\n", 42);
	specs_one_int("%11.10d\n", 42);
	specs_one_dbl("%10f\n", 42.42);
	specs_one_dbl("%10.10f\n", 42.42);
	specs_one_dbl("%10.0f\n", 42.42);
	specs_one_dbl("%1f\n", 42.42);
	specs_one_int("%#10d\n", 42);
	specs_one_int("%010d\n", 42);
	specs_one_int("%#010d\n", 42);
	return (0);
}
