/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:28:10 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:56:45 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "libft/libft.h"

void	ft_error(void)
{
	ft_printf("Error sending bit from client to server\n");
	exit(EXIT_FAILURE);
}

void	send_signal(int pid, char i) // i = argv[2][i]
{
	int	bit_position;

	bit_position = 7;
	while (bit_position >= 0)
	{
		if ((i >> bit_position) & 1)
		{
			if (kill(pid, SIGUSR1) == -1)
				ft_error();
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				ft_error();
		}
		bit_position--;
		usleep(100);
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid == -1)
		{
			ft_printf("PID creation failed\n");
			exit (EXIT_FAILURE);
		}
		while (argv[2][i])
		{
			send_signal(pid, argv[2][i]);
			i++;
		}
		send_signal(pid, '\n');
	}
	else
	{
		ft_printf("Invalid format.\n");
		ft_printf("Try: [./client <SERVER ID (PID)> <MESSAGE>]\n");
	}
	return (0);
}
