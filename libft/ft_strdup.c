/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:27:42 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/29 12:56:44 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>*/

/*save a copy of the string*/
/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}*/

char	*ft_strdup(const char *src)
{
	char	*new;
	char	*old;
	int		i;

	old = (char *)src;
	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(old) + 1);
	if (!(new))
		return (NULL);
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	const char str1[] = "Here we go";
	char *dupli = strdup(str1);
	char *dupli2 = ft_strdup(str1);

	printf("Original: %s\n", str1);
	printf("Created: %s\n", str1);
	printf("Original: %s\n", dupli);
	printf("Created: %s", dupli2);
	return (0);
}

int	main(int arc, char **arv)
{
	char	*Original;
	char	*Created;

	if (arc == 2)
	{
		Original = strdup(arv[1]);
		Created = ft_strdup(arv[1]);
		printf(":%s:\n:%s:\n", Original, Created);
	}
	return (0);
}*/
