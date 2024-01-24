/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:24:04 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/31 15:55:15 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_created(unsigned int num, char c)
{
	num = 0;

    if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}

int	main(void)
{
	char	str[] = "Strmapi function. Apply the funcion *f to the string *s.";
	char	*result = ft_strmapi(str, ft_created);

	if (!result)
		return (1);
	printf("Cadena original: %s\n", str);
	printf("Cadena new: %s\n", result);
	free (result);
	return (0);
}*/
