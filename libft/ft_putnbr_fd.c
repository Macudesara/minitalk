/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:19:39 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:19:06 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	int	module;
	int	rest;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		module = n % 10;
		rest = n / 10;
		if (rest > 0)
			ft_putnbr_fd(rest, fd);
		ft_putchar_fd(module + '0', fd);
	}
}

/*int	main(void)
{
	int	num = -2147483648;
	int	fd = 1;

	ft_putnbr_fd(num, fd);
	return (0);
}*/
