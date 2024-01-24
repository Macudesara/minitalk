/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:28:10 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 15:01:15 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

int	g_by[8];

void	print_byte(void)
{
	int	res;
	int	j;
	int	k;

	res = 0;
	j = 0;
	k = 128;
	while (j < 8)
	{
		res += g_by[j] * k;
		k = k / 2;
		j++;
	}
	ft_putchar_fd(res, 1);
}

void	recieve_signal(int signal)
{
	static int	i = 0;

	if (signal == SIGUSR1)
	{
		g_by[i] = 1;
		i++;
	}
	else if (signal == SIGUSR2)
	{
		g_by[i] = 0;
		i++;
	}
	if (i == 8)
	{
		print_byte();
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	argv = 0;
	ft_printf("Server ready to be used\n");
	ft_printf("The server PID is: %d\n", getpid());
	pid = getpid();
	if (!pid)
		write(1, "error\n", 6);
	ft_printf("Format: ./client %d \"write the message>\"\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, recieve_signal);
		signal(SIGUSR2, recieve_signal);
		pause();
	}
	return (0);
}
