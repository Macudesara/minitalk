/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:03:21 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/25 13:12:08 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
/*#include <string.h>
#include <stdio.h>*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	i = 0;
	ptrs = (unsigned char *)s;
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return (&ptrs[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Welfcome";
	int		c = 'f';

	printf("Orginal: %s\n", memchr(str, c, sizeof(str)));
	printf("Created: %s\n", ft_memchr(str, c, sizeof(str)));
	return (0);
}*/
