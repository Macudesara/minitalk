/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexaup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:31:55 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:46:41 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <limits.h>
#include <stdio.h>*/

void	ft_printf_hexaup(unsigned long long int num, int *count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (num >= 16)
	{
		ft_printf_hexaup(num / 16, count);
		if ((*count) == -1)
		{
			*count = -1;
			return ;
		}
	}
	if (write(1, &base[num % 16], 1) == -1)
	{
		*count = -1;
		return ;
	}
	(*count)++;
}

/*int    main(void)
{
    unsigned long long int num = -5644;
    int count = 0;
    int result;

    result = printf("%lX", num);
    printf("(x) Unsigned hexadecimal integer(uppercase): %lu\n", result);
    ft_printf_hexaup(num, &count);
    printf("(x) Unsigned hexadecimal integer(uppercase): %lu\n", count);
    return (0);
}*/
