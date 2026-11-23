/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aladomin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 12:04:14 by aladomin          #+#    #+#             */
/*   Updated: 2026/11/23 14:10:21 by aladomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

static size_t	get_line_size(int line_offset, ssize_t buffer)
{
		int		current_index;
		size_t	line_size;

		current_index = 0;
		line_size = 0;
		while (line_offset > 0)
				if (!buffer[current_index] || buffer[current_index++] == '\n')
						line_offset--;
		while (buffer[current_index] && buffer[current_index++] != '\n')
				line_size++;
		return (line_size);
}

char	*get_next_line(int fd)
{
		static size_t	*line_offset;
		ssize_t			*buffer_size;
		size_t			*line_size;
		char			*line;
		char			*buffer;

		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer || !(read(fd, buffer_size, BUFFER_SIZE)))
				return (NULL);
		if (!line_offset)
				line_offset = 0;
		line_size = get_line_size(line_offset, buffer);
		line_offset++;
		// Récupérer le contenu de la ligne afin de le renvoyer
		return (buffer);
}

#include <stdio.h>

int		main(void)
{
		printf("%s\n", get_next_line(2));
}
