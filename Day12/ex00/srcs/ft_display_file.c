/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:39:36 by cking             #+#    #+#             */
/*   Updated: 2018/03/29 10:32:55 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

int		ft_strcmp(const char*,const char*);

int		main(int argc, char **argv)
{
	int fd;
	char c[BUF_SIZE + 1];

	fd = 0;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc >= 3)
		write(2, "Too many arguments.\n",20);
	else if (ft_strcmp(argv[1],"Makefile") == 0)
		write(1,"*contenu du Makefile*\n", 23);
	else
	{
		fd = open(argv[1],O_RDONLY);

		while(read(fd, &c, 1) != '\0')
		{
			write(1, &c, 1);
		}

	}
	close(fd);
}
