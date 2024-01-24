/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:30:23 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/22 16:26:17 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>
#include <stddef.h>*/

/*copy a memory block from one place to the other one
dest is a pointer to the destination memory block where the data will be copied
src is a pointer to the source memory block from which the data will be copied
n is the number of bytes to copy*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "Hola Macu";
	char	src[] = "Crazy week";
	ft_memcpy(dest, src, 6);
	printf("Created value of dest: %s\n", dest);
	memcpy(dest, src, 6);
	printf("Original value of dest: %s", dest);
	return (0);
}*/
