/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_specs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:53:30 by cchen             #+#    #+#             */
/*   Updated: 2022/03/14 09:36:29 by cchen            ###   ########.fr       */
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

void	specs_two_int(const char *format, const int n1, const int n2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n1, n2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n1, n2);
	system("scripts/compare.sh");
}

void	specs_three_int(const char *format, const int n1, const int n2, const int n3)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n1, n2, n3);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n1, n2, n3);
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

void	specs_two_ptr(const char *format, const void *p1, const void *p2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, p1, p2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, p1, p2);
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

void	specs_two_long(const char *format, const long n1, const long n2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n1, n2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n1, n2);
	system("scripts/compare.sh");
}

void	specs_one_dbl(const char *format, const double dbl)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, dbl);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, dbl);
	system("scripts/compare.sh");
}

void	specs_one_Ldbl(const char *format, const long double dbl)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, dbl);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, dbl);
	system("scripts/compare.sh");
}

void	specs_db_ldb_Ldb(const char *format, const double dbl1, const double dbl2,
		const long double dbl3)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, dbl1, dbl2, dbl3);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, dbl1, dbl2, dbl3);
	system("scripts/compare.sh");
}

void	specs_int_str(const char *format, const int n, const char *s)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n, s);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n, s);
	system("scripts/compare.sh");
}
