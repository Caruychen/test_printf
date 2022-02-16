/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:17:11 by cchen             #+#    #+#             */
/*   Updated: 2022/02/16 12:59:07 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*s = "World";
	ft_printf("");
	ft_printf("Hello World\n");
	ft_printf("This is a string: %s\n", s);
	printf("printf This is a decimal: %d\n", 42);
	ft_printf("ft_printf This is a decimal: %d", 42);
	ft_printf("This is a char: %c", 'c');
	return (0);
}
