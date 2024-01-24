/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:11:31 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/29 11:27:32 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/

/*dynamically allocate a memory space and initialize it to 0*/

/*void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
		str[i++] = 0;
}*/

void	*ft_calloc(size_t num_elements, size_t size_elements)
{
	void	*ptr;

	ptr = malloc(num_elements * size_elements);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size_elements * num_elements);
	return (ptr);
}

/*int	main(void)
{
	size_t	n_ele = 0;
	size_t	s_ele = 0;

	printf("Original: %s\n", calloc(n_ele, s_ele));
	printf("Created: %s", ft_calloc(n_ele, s_ele));
	return (0);
}*/
