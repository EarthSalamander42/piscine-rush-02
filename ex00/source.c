/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   source.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:31:22 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/21 14:31:24 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 2048

char *read_from_stdin() {
	char	buffer[BUFFER_SIZE];
	char	*buff_ptr;
	int		total_read;
	int		read_bytes;
	int		i;
	char	*out;

	// read until we get 0 or error from read 
	buff_ptr = buffer;
	read_bytes = 1;
	total_read = 0;
	while (read_bytes > 0)
	{
		printf("Actual count: %d\n", read_bytes);
		printf("Total count: %d\n", total_read);
		read_bytes = read(0, buff_ptr, sizeof(char) * BUFFER_SIZE);
		total_read += read_bytes;
		buff_ptr += read_bytes;
	}
	out = malloc(total_read + 1); // +1 = null byte
	if (out == NULL)
		return (NULL);
	i = 0;
	while (i < total_read)
	{
		out[i] = buffer[i];
		i++;
	}
	out[i] = '\0';
	write(1, "\n", 1);
	return out;
}

int		main(int argc, char **argv)
{
	printf("Result: \n%s\n", read_from_stdin());
	argc++;
	argc--;
	if (argv[1])
		return (0);
	return (0);
}
