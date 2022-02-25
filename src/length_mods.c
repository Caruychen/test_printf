/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_mods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:04:37 by cchen             #+#    #+#             */
/*   Updated: 2022/02/25 16:02:04 by cchen            ###   ########.fr       */
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
	ft_printf("%hhx\n", (char) 42);
	ft_printf("%hx\n", (short) 42);
	ft_printf("%lx\n", (long) 42);
	ft_printf("%llx\n", (long long) 42);
	printf("%hhx\n", (char) -42);
	printf("%hx\n", (short) -42);
	printf("%lx\n", (long) -42);
	printf("%llx\n", (long long) -42);
	ft_printf("%hhx\n", (char) -42);
	ft_printf("%hx\n", (short) -42);
	ft_printf("%lx\n", (long) -42);
	ft_printf("%llx\n", (long long) -42);
	specs_one_int("%hhx\n", (char) 42);
	specs_one_short("%hx\n", (short) 42);
	specs_one_long("%lx\n", (long) 42);
	specs_one_long_long("%llx\n", (long long) 42);
	specs_one_int("%hhx\n", (char) -42);
	specs_one_short("%hx\n", (short) -42);
	specs_one_long("%lx\n", (long) -42);
	specs_one_long_long("%llx\n", (long long) -42);
	return (0);
}
