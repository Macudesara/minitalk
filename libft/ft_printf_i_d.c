/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_i_d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macudesarasqueta <macudesarasqueta@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:31:55 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:54:10 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printf_i_d(long long int num, int *count)
{
	char	*base;
	int		result;

	base = "0123456789";
	if (num < 0)
	{
		result = write(1, "-", 1);
		if (result == -1)
		{
			*count = -1;
			return ;
		}
		*count += result;
		num = -num;
	}
	if (num >= 10)
		ft_printf_i_d(num / 10, count);
	result = write(1, &base[num % 10], 1);
	if (result == -1)
	{
		*count = -1;
		return ;
	}
	*count += result;
}
