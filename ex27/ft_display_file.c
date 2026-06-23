/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpinto-l <mpinto-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:56:26 by mpinto-l          #+#    #+#             */
/*   Updated: 2026/05/19 17:01:19 by mpinto-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_fd(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(fd, &str[i++], 1);
	}
}

void	ft_display_file(char *filename)
{
	int		fd;
	int		result;
	char	buffer[1024];

	fd = open(filename, O_RDONLY);
	result = 1;
	if (fd == -1)
	{
		return ;
	}
	while (result > 0)
	{
		result = read(fd, buffer, 1024);
		if (result > 0)
		{
			write(1, buffer, result);
		}
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr_fd(2, "File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr_fd(2, "Too many arguments.\n");
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
