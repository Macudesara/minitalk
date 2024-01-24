/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:30:33 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:42:21 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>*/

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	i = 0;
	neg = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (neg * num);
}

/*int	main(void)
{
	char	*str;

	str = "     \t -230+0fesfss65+2";
	printf("Original atoi: %d\n", atoi(str));
	printf("Created atoi: %d\n", ft_atoi(str));
}*/
