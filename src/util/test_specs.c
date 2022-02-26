/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_specs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:53:30 by cchen             #+#    #+#             */
/*   Updated: 2022/02/27 00:13:11 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

void	specs_none(const char *format)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format);
	system("scripts/compare.sh");
}

void	specs_one_char(const char *format, const char c)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, c);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, c);
	system("scripts/compare.sh");
}

void	specs_two_char(const char *format, const char c1, const char c2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, c1, c2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, c1, c2);
	system("scripts/compare.sh");
}

void	specs_one_str(const char *format, const char *s)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, s);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, s);
	system("scripts/compare.sh");
}

void	specs_two_str(const char *format, const char *s1, const char *s2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, s1, s2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, s1, s2);
	system("scripts/compare.sh");
}

void	specs_one_int(const char *format, const int n)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n);
	system("scripts/compare.sh");
}

void	specs_one_ptr(const char *format, const void *p)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, p);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, p);
	system("scripts/compare.sh");
}

void	specs_one_long(const char *format, const long n)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n);
	system("scripts/compare.sh");
}

void	specs_one_long_long(const char *format, const long long n)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n);
	system("scripts/compare.sh");
}

void	specs_one_short(const char *format, const short n)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n);
	system("scripts/compare.sh");
}


