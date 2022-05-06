/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:41:27 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/05/06 12:05:59 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		size_t	i = 0;
		size_t	len = strlen(argv[1]);
		while (i < len)
		{
			ft_putchar_fd(argv[1][i], atoi(argv[2]));
			i += 1;
		}
	}
	else
	{
		putchar(0);
		putc(0, stdout);
		ft_putchar_fd(0, STDOUT_FILENO);

		putchar(-100);
		putc(-100, stdout);
		ft_putchar_fd(-100, STDOUT_FILENO);

		putchar(126);
		putc(126, stdout);
		ft_putchar_fd(126, STDOUT_FILENO);
	}
	return (0);
}
*/
