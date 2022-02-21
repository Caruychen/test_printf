/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_wrappers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:28:02 by cchen             #+#    #+#             */
/*   Updated: 2022/02/21 10:30:00 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "ft_printf.h"
#include <stdio.h>

void	vdprintf_wrap(const char *format, ...)
{
	int		fd;
	va_list	ap;

	va_start(ap, format);
	fd = file_open("sample_c");
	vdprintf(fd, format, ap);
	close(fd);
	va_end(ap);
}
