/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:12:53 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/25 13:38:19 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/
//#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*need;

	i = 0;
	hay = (char *)haystack;
	need = (char *)needle;
	if (!*need)
		return (hay);
	while (hay[i] && i < len)
	{
		if (hay[i] == need[0])
		{
			j = 1;
			while (need[j] && i + j < len && hay[i + j] == need[j])
				j++;
			if (!(need[j]))
				return (&hay[i]);
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	hay[] = "Lunch time tt iis";
	char	need[] = "time";

	printf("Original: %s\n", strnstr(hay, need, 8*sizeof(hay)));
	printf("Created: %s\n", ft_strnstr(hay, need, 8*sizeof(hay)));
	return (0);
}*/
