/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:44:55 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/23 12:49:11 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/*int	main(void)
{
	char	str1[] = "I   dant to finish this";
	char	str2[] = "I u will";
	size_t	i;

	i = 6;
	printf("Original: %i\n", strncmp(str1, str2, i));
	printf("Created: %i\n", ft_strncmp(str1, str2, i));
	return (0);
}*/
