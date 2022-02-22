/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:04:37 by cchen             #+#    #+#             */
/*   Updated: 2022/02/22 17:19:52 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>

int	test_flags(void)
{
	printf("%hhd\n", (char) 42);
	printf("%hd\n", (short) 42);
	printf("%ld\n", (long) 42);
	printf("%lld\n", (long long) 42);
	specs_one_int("%hhd\n", (char) 42);
	specs_one_short("%hd\n", (short) 42);
	specs_one_long("%ld\n", (long) 42);
	specs_one_long_long("%lld\n", (long long) 42);
	return (0);
}
