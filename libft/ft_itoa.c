/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:18:15 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:48:59 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>
#include <string.h>*/

//len function calculator to get malloc size
int	ft_lenn(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
		len = 11;
	else if (num < 0)
	{
		len++;
		num = -num;
	}
	else if (num == 0)
		len++;
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	ft_printnum(int flag, int n, int lennum, char *str)
{
	int	nbyn;

	while (lennum != flag)
	{
		if (n == -2147483648)
		{
			str[10] = '8';
			n = 214748364;
			lennum--;
		}
		lennum--;
		nbyn = n / 10;
		str[lennum] = 48 + n % 10;
		n = nbyn;
	}
	return (*str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		lennum;
	int		flag;

	flag = 0;
	lennum = ft_lenn(n);
	str = (char *)malloc((lennum + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[lennum] = '\0';
	if (n == 0)
	{
		lennum = 1;
		str[0] = '0';
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		flag = 1;
	}
	ft_printnum(flag, n, lennum, str);
	return (str);
}

/*int	main(void)
{
	int	num = 0;
	char	*str = ft_itoa(num);
	printf("Int a string: %s\n", str);
	return (0);
}*/
