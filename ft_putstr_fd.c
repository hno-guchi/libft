/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:42:03 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/05/06 12:31:53 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (s == NULL)
		(void)write(fd, "(null)", 6);
	else
	{
		len = ft_strlen(s);
		(void)write(fd, s, len);
	}
	return ;
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putstr_fd(argv[1], atoi(argv[2]));
	else
	{
		printf("\n----- arg = NULL -----\n");
		write(STDOUT_FILENO, "puts() = [", 10);
		puts(NULL);
		write(STDOUT_FILENO, "]\n", 2);
		write(STDOUT_FILENO, "ft_()  = [", 10);
		ft_putstr_fd(NULL, STDOUT_FILENO);
		write(STDOUT_FILENO, "]\n", 2);

		printf("\n----- arg = \"\" -----\n");
		write(STDOUT_FILENO, "puts() = [", 10);
		puts("");
		write(STDOUT_FILENO, "]\n", 2);
		write(STDOUT_FILENO, "ft_()  = [", 10);
		ft_putstr_fd("", STDOUT_FILENO);
		write(STDOUT_FILENO, "]\n", 2);

		printf("\n----- arg = 0 -----\n");
		write(STDOUT_FILENO, "puts() = [", 10);
		puts(0);
		write(STDOUT_FILENO, "]\n", 2);
		write(STDOUT_FILENO, "ft_()  = [", 10);
		ft_putstr_fd(0, STDOUT_FILENO);
		write(STDOUT_FILENO, "]\n", 2);
	}
	return (0);
}
*/
