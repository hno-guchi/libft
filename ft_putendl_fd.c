/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:43:08 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/05/06 15:17:36 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putendl_fd(argv[1], atoi(argv[2]));
	else
	{
		printf("\n----- arg = NULL -----\n");
		write(STDOUT_FILENO, "puts() = [", 10);
		puts(NULL);
		write(STDOUT_FILENO, "]\n", 2);
		write(STDOUT_FILENO, "ft_()  = [", 10);
		ft_putendl_fd(NULL, STDOUT_FILENO);
		write(STDOUT_FILENO, "]\n", 2);

		printf("\n----- arg = \"\" -----\n");
		write(STDOUT_FILENO, "puts() = [", 10);
		puts("");
		write(STDOUT_FILENO, "]\n", 2);
		write(STDOUT_FILENO, "ft_()  = [", 10);
		ft_putendl_fd("", STDOUT_FILENO);
		write(STDOUT_FILENO, "]\n", 2);

		printf("\n----- arg = 0 -----\n");
		write(STDOUT_FILENO, "puts() = [", 10);
		puts(0);
		write(STDOUT_FILENO, "]\n", 2);
		write(STDOUT_FILENO, "ft_()  = [", 10);
		ft_putendl_fd(0, STDOUT_FILENO);
		write(STDOUT_FILENO, "]\n", 2);
	}
	return (0);
}
*/
