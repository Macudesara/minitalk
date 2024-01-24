/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:16:05 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/31 11:30:15 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	char	*ptrsrc;
	char	*ptrdest;

	ptrsrc = (char *)src;
	ptrdest = (char *)dest;
	len = ft_strlen(ptrsrc);
	if (dstsize < 1)
		return (len);
	i = 0;
	while (ptrsrc[i] && i < dstsize -1)
	{
			ptrdest[i] = ptrsrc[i];
			i++;
	}
	ptrdest[i] = '\0';
	return (len);
}

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - start;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strcut;
	int		i;
	int		e;

	e = ft_strlen((char *)s1);
	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (e > i && ft_strchr(set, s1[e - 1]))
		e--;
	strcut = ft_substr(s1, i, e - i);
	if (!strcut)
		return (NULL);
	return (strcut);
}

/*int	main(void)
{
	char	*string = "   never give up";
	char	*cut = "vue up";

	printf("String pasado: %s\n", string);
	printf("Letras a encontrar: %s\n", cut);
	printf("String cortado: %s", ft_strtrim(string, cut));
	return (0);
}*/
