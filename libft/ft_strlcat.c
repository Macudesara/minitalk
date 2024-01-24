/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:10:37 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/29 13:29:34 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/
//#include <stddef.h>

/*The strlcat function returns the total length of the resulting string*/

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen((char *)src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	i = 0;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

/*int	main(void)
{
	char	dst[20] = "Lovely";
	char	src[] = "Crazy week";
	printf("Concatenated string: %s\n", dst);
	printf("Src string: %s\n", src);
	printf("Original total length: %lu\n", strlcat(dst, src, sizeof(dst)));
	printf("Created total length %lu", ft_strlcat(dst, src, sizeof(dst)));
	return (0);
}*/
