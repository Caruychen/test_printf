/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:35:45 by cchen             #+#    #+#             */
/*   Updated: 2022/03/15 17:13:53 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <float.h>
# include <string.h>

void	print_title(const char *str);
int		file_open(char *name);
void	vdprintf_wrap(const char *format, ...);
void	init_redirect(int *file_desc, int *copy_out);
void	reset_output(int *file_desc, int *copy_out);

int	test_basic(void);
int	test_lengths(void);
int	test_flags(void);
int	test_precision(void);
int	test_widths(void);
void	test_wildcards(void);
void	test_more(void);
void	specs_none(const char *format);
void	specs_one_char(const char *format, const char c);
void	specs_two_char(const char *format, const char c1, const char c2);
void	specs_one_str(const char *format, const char *s);
void	specs_two_str(const char *format, const char *s1, const char *s2);
void	specs_one_int(const char *format, const int n);
void	specs_two_int(const char *format, const int n1, const int n2);
void	specs_three_int(const char *format, const int n1, const int n2, const int n3);
void	specs_one_ptr(const char *format, const void *p);
void	specs_two_ptr(const char *format, const void *p1, const void *p2);
void	specs_one_long(const char *format, const long n);
void	specs_two_long(const char *format, const long n1, const long n2);
void	specs_one_dbl(const char *format, const double dbl);
void	specs_one_Ldbl(const char *format, const long double dbl);
void	specs_db_ldb_Ldb(const char *format, const double dbl1, const double dbl2,
		const long double dbl3);
void	specs_int_str(const char *format, const int n, const char *s);

#endif
