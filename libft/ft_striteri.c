/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:04:25 by mde-sara          #+#    #+#             */
/*   Updated: 2024/01/24 14:18:42 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

/*void	ft_created(unsigned int num, char *c)
{
	num = 0;

    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

int	main(void)
{
	char	str[] = "Striteri function. Apply the funcion *f to the string *s. 
	Cambia la cadena original sin crear una nueva. NO MALLOC";
	ft_striteri(str, ft_created);

	printf("Cadena original: %s\n", str);
	printf("Cadena new: %s\n", str);
	return (0);
}*/
