/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:09:49 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:17:30 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stddef.h>*/

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;

	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	len = ft_strlen(ptrsrc);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (ptrsrc[i] && i < dstsize -1)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	ptrdest[i] = '\0';
	return (len);
}

/*int	main(void)
{
	char	dst[20] = "Lovly week";
	char	src[] = "Crazy week";
	int		size;
	
	size = 2;
	printf("Copy string: %s\n", dst);
	printf("Src string: %s\n", src);
	printf("Original: %lu\n", strlcpy(dst, src, size));
	printf("Created: %zu", ft_strlcpy(dst, src, size));
	return (0);
}*/
