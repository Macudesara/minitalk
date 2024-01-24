/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 11:32:15 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/23 13:41:26 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/
//#include <stddef.h>

/*This function compares the first n bytes of the memory 
 * blocks pointed to by ptr1 and ptr2.
If ptr1 is less than ptr2, it returns a negative value.
If ptr1 is equal to ptr2, it returns 0.
If ptr1 is greater than ptr2, it returns a positive value.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Newholaaa";
	char	s2[] = "New home";
	 
	printf("Created: The result is: %d\n", ft_memcmp(s1, s2, 10));
	printf("Original: The result is: %d\n", memcmp(s1, s2, 10));
	return 0;
}*/
