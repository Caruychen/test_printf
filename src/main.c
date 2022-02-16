/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 11:17:11 by cchen             #+#    #+#             */
/*   Updated: 2022/02/16 11:48:34 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*s = "World";
	ft_printf("");
	ft_printf("Hello World\n");
	ft_printf("Hello %s\n", s);
	ft_printf("Number: %d", 42);
	ft_printf("Char: %c", 'c');
	return (0);
}
