/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:31:55 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/09 14:18:19 by macudesaras      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <stdio.h>*/

void	ft_printf_char(char c, int *count)
{
	if (write(1, &c, 1) == -1)
	{
		*count = -1;
		return ;
	}
	(*count)++;
}

/*int	main(void)
{
	int	resultado;
	int	count = 0;

	resultado = printf("%c", 'f');
	printf("Cantidad de caracteres impresos: %d\n", resultado);

	ft_printf_char('f', &count);
    printf("Cantidad de caracteres impresos: %d\n", count);
	return (0);
}*/
