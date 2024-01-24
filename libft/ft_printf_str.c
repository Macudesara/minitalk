/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:31:55 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:21:15 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_str(char *str, int *count)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		if (write(1, str++, 1) == -1)
		{
			*count = -1;
			return ;
		}
		(*count)++;
	}
}

/*int main(void)
{
    int count = 0;
    char str [] = "Hello word!\n"

    printf("Usando printf:\n");
    int resultado = printf("%s", str);
    printf("Cantidad de caracteres impresos por printf: %d\n", resultado);

    printf("\nUsando ft_printf_str:\n");
    ft_printf_str(str, &count);
    printf("Cantidad de caracteres impresos por ft_printf_str: %d\n", count);

    return 0;
}*/
