/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_compare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:01:32 by cchen             #+#    #+#             */
/*   Updated: 2022/02/21 10:52:50 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	compare_files(FILE *fp1, FILE *fp2)
{
	char	*line1 = NULL;
	char	*line2 = NULL;
	size_t	len1 = 0;
	size_t	len2 = 0;
	ssize_t	ret1 = 0;
	ssize_t	ret2 = 0;

	do
	{
		ret1 = getline(&line1, &len1, fp1);
		ret2 = getline(&line2, &len2, fp2);
		if (ret1 != ret2 || strcmp(line1, line2) || len1 != len2)
		{
			printf("Error: Printf results differ\n");
			printf("Expected: %s", line2);
			printf("Received: %s", line1);
		}
		if (ret1 != -1)
			free(line1);
		if (ret2 != -1)
			free(line2);
	} while (ret1 != -1 && ret2 != -1);
}

void	run_compare(void)
{
	FILE	*fp1 = fopen("sample_ft", "r");
	FILE	*fp2 = fopen("sample_c", "r");

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("Error: files did not open\n");
		exit (0);
	}
	compare_files(fp1, fp2);
	fclose(fp1);
	fclose(fp2);
}
