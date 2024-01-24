/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:40:24 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/23 13:38:03 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/
//#include <stddef.h>

/*reemplaze into the string (void *str, changed to unsigned char *) 
 * the characters you want (int c, changed to unsigned char), 
 * choosing where in the string you want to change (size_t len)*/

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "We are going to the cinema";
	printf("%s \n", ft_memset(str, '$', 6 * sizeof(char)));
	printf("%s", memset(str, '$', 6 * sizeof(char)));
	return (0);
}*/
