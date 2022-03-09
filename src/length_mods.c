/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_mods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:04:37 by cchen             #+#    #+#             */
/*   Updated: 2022/03/09 11:31:03 by cchen            ###   ########.fr       */
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
	for (int i = 0; i < 16; i++)
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
	for (int i = 0; i < 16; i++)
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

static void	test_doubles_l(void)
{
	specs_one_dbl("lf conversion: %lf\n", 42.42);
	specs_one_dbl("lf conversion: %lf\n", 2.3);
	specs_one_dbl("lf conversion: %lf\n", 1.2);
	specs_one_dbl("lf conversion: %lf\n", -42.42);
	specs_one_dbl("lf conversion: %lf\n", 9.9999997);
	specs_one_dbl("lf conversion: %lf\n", 9.999999);
	specs_one_dbl("lf conversion: %lf\n", 9.9999999);
	specs_one_dbl("lf conversion: %lf\n", 2.5555545f);
	specs_one_dbl("lf conversion: %lf\n", 3.55);
	specs_one_dbl("lf conversion: %lf\n", 3.55 / 1.5);

	specs_one_Ldbl("Lf conversion: %Lf\n", 42.42L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 2.3L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 1.2L);
	specs_one_Ldbl("Lf conversion: %Lf\n", -42.42L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 9.9999997L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 9.999999L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 9.9999999L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 2.5555525L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 2.5555535L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 2.5555545L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 2.5555555L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 3.55L);
	specs_one_Ldbl("Lf conversion: %Lf\n", 3.55L / 1.5L);
}

int	test_lengths(void)
{
	long long	n[] = {LONG_MIN, INT_MIN, SHRT_MIN, CHAR_MIN, -42,
			-1, 0 , 1, CHAR_MAX, SHRT_MAX, INT_MAX, LONG_MAX, UCHAR_MAX, USHRT_MAX, UINT_MAX, ULONG_MAX};
	char	*mods[] = {"hh","h","l","ll"};
	char	*specs[] = {"d","i","o","u","x","X"};;

	print_title("--- Length Modifier Tests ---\n");
	printf("Testing single integer conversions with modifiers, at all Number limits:\n");
	cycle_single_arg(n, mods, specs);
	printf("\nTesting two integer conversion with modifiers, at all Number limits:\n");
	cycle_two_arg(n, mods, specs);
	printf("\nTesting float conversions with length modifiers:\n");
	test_doubles_l();
	return (0);
}
