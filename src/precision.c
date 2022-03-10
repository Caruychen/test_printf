/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 20:12:40 by cchen             #+#    #+#             */
/*   Updated: 2022/03/10 17:00:35 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	prec_char(void)
{
	specs_one_int("Test .hhd: %.hhd\n", 42);
	specs_one_int("Test .1hhd: %.1hhd\n", 42);
	specs_one_int("Test .2hhd: %.2hhd\n", 42);
	specs_one_int("Test .4hhd: %.4hhd\n", 42);
	specs_two_int("@moulitest #hhd #.hhd: %#hhd %#.hhd", 0, 0);
	specs_two_int("@moulitest #hhx #.hhx: %#hhx %#.hhx", 0, 0);
	specs_two_int("@moulitest hhx .hhx: %hhx %.hhx", 0, 0);
	specs_two_int("@moulitest #.hhx #.0hhx: %#.hhx %#.0hhx", 0, 0);
	specs_two_int("@moulitest #.hho #.0hho: %#.hho %#.0hho", 0, 0);
	specs_two_int("@moulitest .hhx .0hhx: %.hhx %.0hhx", 0, 0);
	specs_two_int("@moulitest .hho .0hho: %.hho %.0hho", 0, 0);
	specs_two_int("@moulitest 5.hhx 5.0hhx: %5.hhx %5.0hhx", 0, 0);
	specs_two_int("@moulitest 5.hho 5.0hho: %5.hho %5.0hho", 0, 0);
	specs_two_int("@moulitest 5.hhu 5.0hhu: %5.hhu %5.0hhu", 0, 0);
	specs_two_int("@moulitest 5.hhd 5.0hhd: %5.hhd %5.0hhd", 0, 0);
	specs_two_int("@moulitest .5hhx 5.5hhx: %.5hhx %5.5hhx", 0, 0);
	specs_two_int("@moulitest .5hho 5.5hho: %.5hho %5.5hho", 0, 0);
	specs_two_int("@moulitest #.5hhx #5.5hhx: %#.5hhx %#5.5hhx", 0, 0);
	specs_two_int("@moulitest #.5hho #5.5hho: %#.5hho %#5.5hho", 0, 0);
	specs_one_int("@moulitest: %.10hhd", -42);
	specs_one_int("@moulitest: %20.10hhd", -42);
	specs_one_int("@moulitest: %020.10hhd", -42);
	specs_one_int("Test 05hhd: %05hhd", -42);
	specs_one_int("Test 0 5hhd: %0 5hhd", 42);
	specs_one_int("Test -5.0hhd: %-5.0hhd", 0);
	specs_one_int("Test -5.hhd: %-5.hhd", 0);
	specs_one_int("Test -5.0hhi: %-5.0hhi", 0);
	specs_one_int("Test -5.hhi: %-5.hhi", 0);
	specs_one_int("Test -5.0hho: %-5.0hho", 0);
	specs_one_int("Test -5.hho: %-5.hho", 0);
	specs_one_int("Test -5.0hhu: %-5.0hhu", 0);
	specs_one_int("Test -5.hhu: %-5.hhu", 0);
	specs_one_int("Test -5.0hhx: %-5.0hhx", 0);
	specs_one_int("Test -5.hhx: %-5.hhx", 0);
	specs_one_int("Test -5.0hhX: %-5.0hhX", 0);
	specs_one_int("Test -5.hhX: %-5.hhX", 0);
}

static void	prec_short(void)
{
	specs_one_int("Test .hd: %.hd\n", 42);
	specs_one_int("Test .1hd: %.1hd\n", 42);
	specs_one_int("Test .2hd: %.2hd\n", 42);
	specs_one_int("Test .4hd: %.4hd\n", 42);
	specs_two_int("@moulitest #hd #.hd: %#hd %#.hd", 0, 0);
	specs_two_int("@moulitest #hx #.hx: %#hx %#.hx", 0, 0);
	specs_two_int("@moulitest hx .hx: %hx %.hx", 0, 0);
	specs_two_int("@moulitest #.hx #.0hx: %#.hx %#.0hx", 0, 0);
	specs_two_int("@moulitest #.ho #.0ho: %#.ho %#.0ho", 0, 0);
	specs_two_int("@moulitest .hx .0hx: %.hx %.0hx", 0, 0);
	specs_two_int("@moulitest .ho .0ho: %.ho %.0ho", 0, 0);
	specs_two_int("@moulitest 5.hx 5.0hx: %5.hx %5.0hx", 0, 0);
	specs_two_int("@moulitest 5.ho 5.0ho: %5.ho %5.0ho", 0, 0);
	specs_two_int("@moulitest 5.hu 5.0hu: %5.hu %5.0hu", 0, 0);
	specs_two_int("@moulitest 5.hd 5.0hd: %5.hd %5.0hd", 0, 0);
	specs_two_int("@moulitest .5hx 5.5hx: %.5hx %5.5hx", 0, 0);
	specs_two_int("@moulitest .5ho 5.5ho: %.5ho %5.5ho", 0, 0);
	specs_two_int("@moulitest #.5hx #5.5hx: %#.5hx %#5.5hx", 0, 0);
	specs_two_int("@moulitest #.5ho #5.5ho: %#.5ho %#5.5ho", 0, 0);
	specs_one_int("@moulitest: %.10hd", -42);
	specs_one_int("@moulitest: %20.10hd", -42);
	specs_one_int("@moulitest: %020.10hd", -42);
	specs_one_int("Test 05hd: %05hd", -42);
	specs_one_int("Test 0 5hd: %0 5hd", 42);
	specs_one_int("Test -5.0hd: %-5.0hd", 0);
	specs_one_int("Test -5.hd: %-5.hd", 0);
	specs_one_int("Test -5.0hi: %-5.0hi", 0);
	specs_one_int("Test -5.hi: %-5.hi", 0);
	specs_one_int("Test -5.0ho: %-5.0ho", 0);
	specs_one_int("Test -5.ho: %-5.ho", 0);
	specs_one_int("Test -5.0hu: %-5.0hu", 0);
	specs_one_int("Test -5.hu: %-5.hu", 0);
	specs_one_int("Test -5.0hx: %-5.0hx", 0);
	specs_one_int("Test -5.hx: %-5.hx", 0);
	specs_one_int("Test -5.0hX: %-5.0hX", 0);
	specs_one_int("Test -5.hX: %-5.hX", 0);
}

static void	prec_int(void)
{
	specs_one_int("Test .d: %.d\n", 42);
	specs_one_int("Test .1d: %.1d\n", 42);
	specs_one_int("Test .2d: %.2d\n", 42);
	specs_one_int("Test .4d: %.4d\n", 42);
	specs_one_dbl("Test .f: %.f\n", 42.42);
	specs_one_dbl("Test .1f: %.1f\n", 42.42);
	specs_one_dbl("Test .2f: %.2f\n", 42.42);
	specs_one_dbl("Test .4f: %.4f\n", 42.42);
	specs_one_dbl("Test .8f: %.8f\n", 42.42);
	specs_two_int("@moulitest #d #.d: %#d %#.d", 0, 0);
	specs_two_int("@moulitest #x #.x: %#x %#.x", 0, 0);
	specs_two_int("@moulitest x .x: %x %.x", 0, 0);
	specs_two_int("@moulitest #.x #.0x: %#.x %#.0x", 0, 0);
	specs_two_int("@moulitest #.o #.0o: %#.o %#.0o", 0, 0);
	specs_two_int("@moulitest .x .0x: %.x %.0x", 0, 0);
	specs_two_int("@moulitest .o .0o: %.o %.0o", 0, 0);
	specs_two_int("@moulitest 5.x 5.0x: %5.x %5.0x", 0, 0);
	specs_two_int("@moulitest 5.o 5.0o: %5.o %5.0o", 0, 0);
	specs_two_int("@moulitest 5.u 5.0u: %5.u %5.0u", 0, 0);
	specs_two_int("@moulitest 5.d 5.0d: %5.d %5.0d", 0, 0);
	specs_two_int("@moulitest .5x 5.5x: %.5x %5.5x", 0, 0);
	specs_two_int("@moulitest .5o 5.5o: %.5o %5.5o", 0, 0);
	specs_two_int("@moulitest #.5x #5.5x: %#.5x %#5.5x", 0, 0);
	specs_two_int("@moulitest #.5o #5.5o: %#.5o %#5.5o", 0, 0);
	specs_one_int("@moulitest: %.10d", -42);
	specs_one_int("@moulitest: %20.10d", -42);
	specs_one_int("@moulitest: %020.10d", -42);
	specs_one_int("Test 05d: %05d", -42);
	specs_one_int("Test 0 5d: %0 5d", 42);
	specs_one_int("Test -5.0d: %-5.0d", 0);
	specs_one_int("Test -5.d: %-5.d", 0);
	specs_one_int("Test -5.0i: %-5.0i", 0);
	specs_one_int("Test -5.i: %-5.i", 0);
	specs_one_int("Test -5.0o: %-5.0o", 0);
	specs_one_int("Test -5.o: %-5.o", 0);
	specs_one_int("Test -5.0u: %-5.0u", 0);
	specs_one_int("Test -5.u: %-5.u", 0);
	specs_one_int("Test -5.0x: %-5.0x", 0);
	specs_one_int("Test -5.x: %-5.x", 0);
	specs_one_int("Test -5.0X: %-5.0X", 0);
	specs_one_int("Test -5.X: %-5.X", 0);
}

static void	prec_long(void)
{
	specs_one_long("Test .ld: %.ld\n", 42);
	specs_one_long("Test .1ld: %.1ld\n", 42);
	specs_one_long("Test .2ld: %.2ld\n", 42);
	specs_one_long("Test .4ld: %.4ld\n", 42);
	specs_one_Ldbl("Test .Lf: %.Lf\n", 42.42);
	specs_one_Ldbl("Test .1Lf: %.1Lf\n", 42.42);
	specs_one_Ldbl("Test .2Lf: %.2Lf\n", 42.42);
	specs_one_Ldbl("Test .4Lf: %.4Lf\n", 42.42);
	specs_one_Ldbl("Test .8Lf: %.8Lf\n", 42.42);
	specs_two_long("@moulitest #ld #.ld: %#ld %#.ld", 0, 0);
	specs_two_long("@moulitest #lx #.lx: %#lx %#.lx", 0, 0);
	specs_two_long("@moulitest lx .lx: %lx %.lx", 0, 0);
	specs_two_long("@moulitest #.lx #.0lx: %#.lx %#.0lx", 0, 0);
	specs_two_long("@moulitest #.lo #.0lo: %#.lo %#.0lo", 0, 0);
	specs_two_long("@moulitest .lx .0lx: %.lx %.0lx", 0, 0);
	specs_two_long("@moulitest .lo .0lo: %.lo %.0lo", 0, 0);
	specs_two_long("@moulitest 5.lx 5.0lx: %5.lx %5.0lx", 0, 0);
	specs_two_long("@moulitest 5.lo 5.0lo: %5.lo %5.0lo", 0, 0);
	specs_two_long("@moulitest 5.lu 5.0lu: %5.lu %5.0lu", 0, 0);
	specs_two_long("@moulitest 5.ld 5.0ld: %5.ld %5.0ld", 0, 0);
	specs_two_long("@moulitest .5lx 5.5lx: %.5lx %5.5lx", 0, 0);
	specs_two_long("@moulitest .5lo 5.5lo: %.5lo %5.5lo", 0, 0);
	specs_two_long("@moulitest #.5lx #5.5lx: %#.5lx %#5.5lx", 0, 0);
	specs_two_long("@moulitest #.5lo #5.5lo: %#.5lo %#5.5lo", 0, 0);
	specs_one_long("@moulitest: %.10ld", -42);
	specs_one_long("@moulitest: %20.10ld", -42);
	specs_one_long("@moulitest: %020.10ld", -42);
	specs_one_long("Test 05ld: %05ld", -42);
	specs_one_long("Test 0 5ld: %0 5ld", 42);
	specs_one_long("Test -5.0ld: %-5.0ld", 0);
	specs_one_long("Test -5.ld: %-5.ld", 0);
	specs_one_long("Test -5.0li: %-5.0li", 0);
	specs_one_long("Test -5.ldi %-5.li", 0);
	specs_one_long("Test -5.0lo: %-5.0lo", 0);
	specs_one_long("Test -5.ldo %-5.lo", 0);
	specs_one_long("Test -5.0lu: %-5.0lu", 0);
	specs_one_long("Test -5.ldu %-5.lu", 0);
	specs_one_long("Test -5.0lx: %-5.0lx", 0);
	specs_one_long("Test -5.ldx %-5.lx", 0);
	specs_one_long("Test -5.0lX: %-5.0lX", 0);
	specs_one_long("Test -5.ldX %-5.lX", 0);
}

int	test_precision(void)
{
	printf("\nTesting precision specifier on str\n");
	specs_one_str("Test .s: %.s\n", "Hello");
	specs_one_str("Test .2s: %.2s\n", "Hello");
	specs_one_str("Test .5s: %.5s\n", "Hello");
	specs_one_str("Test .8s: %.8s\n", "Hello");
	specs_one_str("Test .2s: %.2s\n", (char *)NULL);
	printf("\nTesting precision specifier on char\n");
	prec_char();
	printf("\nTesting precision specifier on short\n");
	prec_short();
	printf("\nTesting precision specifier on int\n");
	prec_int();
	printf("\nTesting precision specifier on long\n");
	prec_long();
	printf("\nTestcing precision specifier on pointer\n");
	specs_two_ptr("%.0p, %.p", 0, 0);
	specs_two_ptr("%.p, %.0p", 0, 0);
	specs_one_ptr("%.5p", 0);
	return (0);
}
