/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:07:23 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/23 12:38:09 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

/*displays at which position the first desired character was found*/
/*and if it doesn't find it, it returns NULL*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int main(void)
{
    const char	*s = "Love Fridays";
    char	character;
	char	*resultado;

	character = 'v';
	resultado = strchr(s, character);
    printf("Original found letter: %s\n", strchr(s, character));
	printf("Created found letter: %s\n", ft_strchr(s, character));
	printf("In posicion: %ld", resultado - s + 1);
    return (0);
}*/
