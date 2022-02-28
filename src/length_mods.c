/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_mods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:04:37 by cchen             #+#    #+#             */
/*   Updated: 2022/02/28 13:34:06 by cchen            ###   ########.fr       */
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

static void	set_two_format(char *format, char *mod1, char *spec1, char *mod2, char *spec2)
{
	char	c1[10];
	char	c2[10];

	strcpy(c1, mod1);
	strcat(c1, spec1);
	strcpy(c2, mod2);
	strcat(c2, spec2);
	strcpy(format, "Testing ");
	strcat(format, c1);
	strcat(format, " ");
	strcat(format, c2);
	strcat(format, ": %");
	strcat(format, c1);
	strcat(format, " %");
	strcat(format, c2);
	strcat(format, "\n");
}

static void	cycle_single_arg(long long *n, char **mods, char **specs)
{
	char	format[42];
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
}

static void	cycle_two_arg(long long *n, char **mods, char **specs)
{
	char	format[42];
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
				set_two_format(format, mods[m], specs[s], mods[3-m], specs[5-s]);
				specs_two_long(format, n[i], n[i]);
			}
		}
		printf("\n");
	}
}

int	test_flags(void)
{
	long long	n[] = {LONG_MIN, INT_MIN, SHRT_MIN, CHAR_MIN,
			-1, 0 , 1, CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX, UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};
	char	*mods[] = {"hh","h","l","ll"};
	char	*specs[] = {"d","i","o","u","x","X"};;

	print_title("--- Length Modifier Tests ---\n");
	printf("Testing single integer conversions with modifiers, at all Number limits:\n");
	cycle_single_arg(n, mods, specs);
	printf("\nTesting two integer conversion with modifiers, at all Number limits:\n");
	cycle_two_arg(n, mods, specs);
	return (0);
}
