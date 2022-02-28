/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_mods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:04:37 by cchen             #+#    #+#             */
/*   Updated: 2022/02/28 11:45:07 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <stdlib.h>

static void	set_format(char *format, char *mod, char *spec)
{
	char	conversion[10];

	strcpy(conversion, mod);
	strcat(conversion, spec);
	strcpy(format, "Testing ");
	strcat(format, conversion);
	strcat(format, ": %");
	strcat(format, conversion);
	strcat(format, "\n");
}

int	test_flags(void)
{
	long long	n[] = {LONG_MIN, INT_MIN, SHRT_MIN, CHAR_MIN,
			-1, 0 , 1, CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX, UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};
	char	format[42];
	char	*mods[] = {"hh","h","l","ll"};
	char	*specs[] = {"d","i","o","u","x","X"};;

	print_title("--- Length Modifier Tests ---\n");
	printf("Testing integer conversions with modifers, at all Number limits:\n");
	for (int i = 0; i < 15; i++)
	{
		if (i < 14)
			printf("Testing on %lld\n", n[i]);
		else
			printf("Testing on %llu\n", n[i]);
		format[0] = '\0';
		for (int m = 0; m < 4; m++)
		{
			for (int s = 0; s < 6; s++)
			{
				set_format(format, mods[m], specs[s]);
				specs_one_long(format, n[i]);
			}
		}
		printf("\n");
	}
	return (0);
}
