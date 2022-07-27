/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joapedr2 <jpedrones@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:35:14 by joapedr2          #+#    #+#             */
/*   Updated: 2022/07/05 20:14:11 by joapedr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char **bkp)
{
	char	*line;
	int		len;

	len = 0;
	if (!(*bkp) || !(**bkp))
		return (NULL);
	while ((*bkp)[len] != '\n' && (*bkp)[len])
		len++;
	line = ft_substr(*bkp, 0, (len + 1));
	return (line);
}

static void	get_buffer(int fd, char **bkp)
{
	char	*buffer;
	char	*temp;
	int		readed;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return ;
	readed = 0;
	while (!ft_strchr(*bkp, '\n'))
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed <= 0)
			break ;
		buffer[readed] = '\0';
		temp = *bkp;
		*bkp = ft_strjoin((*bkp), buffer);
		free(temp);
	}
	if (readed <= 0 && !(**bkp))
	{
		free(*bkp);
		*bkp = NULL;
	}
	free(buffer);
}

char	*get_next_line(int fd)
{
	static char	*backup;
	char		*temp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!backup)
		backup = ft_strdup("");
	get_buffer(fd, &backup);
	line = get_line(&backup);
	if (line == NULL)
		return (NULL);
	temp = backup;
	backup = ft_strdup(backup + ft_strlen(line));
	free(temp);
	return (line);
}
