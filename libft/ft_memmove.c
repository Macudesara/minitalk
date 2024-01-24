/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:53:24 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:49:44 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/
//#include <stddef.h>

/*Copy the first n bytes from the source memory block (src) 
 * to the destination memory block (dest) 
 *even when the source and destination memory blocks overlap.
 memmove(str + 4, str, 2)
 the last number (2) means, it gonna copy the 2 first letters
 the number 4 means, where it gonna start copying*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if (dest > src)
		while (n-- > 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	str[] = "hi everyone";
	char	other[] = "See you next time";
	
	printf("Text in str: %s\n", str);
	memmove(str + 4, other, 2);
	printf("Original value of dest: %s\n", str);
	ft_memmove(str + 4, other, 2);
	printf("Created value of dest: %s", str);
	return (0);
}*/
