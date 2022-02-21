/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_wrappers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:28:02 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 15:53:47 by cchen            ###   ########.fr       */
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
	fd = open("sample_c", O_RDWR|O_CREAT|O_TRUNC, 0666);
	vdprintf(fd, format, ap);
	close(fd);
	va_end(ap);
}

