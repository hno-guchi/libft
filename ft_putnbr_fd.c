/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnoguchi <hnoguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:44:24 by hnoguchi          #+#    #+#             */
/*   Updated: 2022/05/06 17:03:25 by hnoguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	ln;
	char			c;

	ln = (long long int)n;
	if (ln == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (ln < 0)
		{
			ft_putchar_fd('-', fd);
			ln *= -1;
		}
		if (9 < ln)
		{
			ft_putnbr_fd(ln / 10, fd);
			ft_putnbr_fd(ln % 10, fd);
		}
		else
		{
			c = ln + '0';
			ft_putchar_fd(c, fd);
		}
	}
	return ;
}

/*
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_fd(atoi(argv[1]), atoi(argv[2]));
	else
	{
		ft_putnbr_fd(INT_MAX, STDOUT_FILENO);
		write(STDOUT_FILENO, "\n", 1);

		ft_putnbr_fd(0, STDOUT_FILENO);
		write(STDOUT_FILENO, "\n", 1);

		ft_putnbr_fd(INT_MIN, STDOUT_FILENO);
		write(STDOUT_FILENO, "\n", 1);

		ft_putnbr_fd(INT_MAX + 1, STDOUT_FILENO);
		write(STDOUT_FILENO, "\n", 1);

		ft_putnbr_fd(INT_MIN - 1, STDOUT_FILENO);
		write(STDOUT_FILENO, "\n", 1);

		ft_putnbr_fd(NULL, STDOUT_FILENO);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
*/
