/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:35:45 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 16:29:02 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

void	vdprintf_wrap(const char *format, ...);
void	init_redirect(int *file_desc, int *copy_out);
void	reset_output(int *copy_out);
void	run_compare(void);

int	test_basic(void);
void	specs_none(const char *format);
void	specs_one_char(const char *format, const char c);
void	specs_two_char(const char *format, const char c1, const char c2);
void	specs_one_str(const char *format, const char *s);
void	specs_two_str(const char *format, const char *s1, const char *s2);
void	specs_one_int(const char *format, const int n);
void	specs_one_ptr(const char *format, const void *p);


#endif
