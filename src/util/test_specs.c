/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_specs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:53:30 by cchen             #+#    #+#             */
/*   Updated: 2022/02/21 11:09:06 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "ft_printf.h"
#include <stdio.h>

void	specs_none(const char *format)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format);
	run_compare();
	file_remove();
}

void	specs_one_char(const char *format, const char c)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, c);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, c);
	run_compare();
	file_remove();
}

void	specs_two_char(const char *format, const char c1, const char c2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, c1, c2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, c1, c2);
	run_compare();
	file_remove();
}

void	specs_one_str(const char *format, const char *s)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, s);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, s);
	run_compare();
	file_remove();
}

void	specs_two_str(const char *format, const char *s1, const char *s2)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, s1, s2);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, s1, s2);
	run_compare();
	file_remove();
}

void	specs_one_int(const char *format, const int n)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, n);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, n);
	run_compare();
	file_remove();
}

void	specs_one_ptr(const char *format, const void *p)
{
	int	file_desc;
	int	copy_out;

	init_redirect(&file_desc, &copy_out);
	ft_printf(format, p);
	reset_output(&file_desc, &copy_out);
	vdprintf_wrap(format, p);
	run_compare();
	file_remove();
}