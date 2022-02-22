/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:26:41 by cchen             #+#    #+#             */
/*   Updated: 2022/02/22 10:59:08 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	file_open(char *name)
{
	return (open(name, O_RDWR|O_CREAT|O_TRUNC, 0666));
}

void	file_remove(void)
{
	remove("sample_c");
	remove("sample_ft");
}
