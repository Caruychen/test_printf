/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_controller.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:33:08 by cchen             #+#    #+#             */
/*   Updated: 2022/02/18 15:38:14 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_redirect(int *file_desc, int *copy_out)
{
	*file_desc = open("sample_ft", O_RDWR|O_CREAT|O_TRUNC, 0666);
	*copy_out = dup(fileno(stdout));
	dup2(*file_desc, fileno(stdout));
}

void	reset_output(int *copy_out)
{
	dup2(*copy_out, fileno(stdout));
	close(*copy_out);
}
		
