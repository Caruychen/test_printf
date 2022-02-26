/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_mods.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:04:37 by cchen             #+#    #+#             */
/*   Updated: 2022/02/27 00:17:16 by cchen            ###   ########.fr       */
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
	int	n[] = {-42, -1, 0 , 1, 42};
	char	format[42];
	char	*mods[] = {"hh","h","l","ll"};
	char	*specs[] = {"d","i","o","u","x","X"};;

	for (int i = 0; i < 5; i++)
	{
		format[0] = '\0';
		for (int m = 0; m < 4; m++)
		{
			for (int s = 0; s < 6; s++)
			{
				set_format(format, mods[m], specs[s]);
				specs_one_long(format, n[i]);
			}
		}
	}
	printf("\n%llu%llx\n", (unsigned long long) -42, (unsigned long long) -42);
	ft_printf("%llu%llx\n", (unsigned long long) -42, (unsigned long long) -42);
	return (0);
}
