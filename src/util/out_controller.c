/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out_controller.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:33:08 by cchen             #+#    #+#             */
/*   Updated: 2022/02/21 10:58:28 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	init_redirect(int *file_desc, int *copy_out)
{
	*file_desc = file_open("sample_ft");
	*copy_out = dup(fileno(stdout));
	dup2(*file_desc, fileno(stdout));
}

void	reset_output(int *file_desc, int *copy_out)
{
	dup2(*copy_out, fileno(stdout));
	close(*copy_out);
	close(*file_desc);
}
		
