/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:13:39 by mde-sara          #+#    #+#             */
/*   Updated: 2023/06/26 14:43:01 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/

char	**ft_free(char **memtot, int j)
{
	while (--j >= 0)
		free(memtot[j]);
	free(memtot);
	return (NULL);
}

int	ft_lwords(char *s, char c)
{
	int	i;
	int	cwords;

	i = 0;
	cwords = 0;
	if (s[0] == '\0')
		return (cwords);
	if (s[i] != c && s[i] != '\0')
	{
		cwords++;
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			cwords++;
		i++;
	}
	return (cwords);
}

int	ft_lenlet(char *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i])
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_submem(char **memtot, char *str, char c, int let)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		let = ft_lenlet(str, c, i);
		if (str[i])
		{
			k = 0;
			memtot[j] = (char *)malloc((let + 1) * sizeof (char));
			if (!memtot[j])
				return (ft_free(memtot, j));
			while (str[i] && str[i] != c)
				memtot[j][k++] = str[i++];
			memtot[j][k] = '\0';
			j++;
		}
	}
	memtot[j] = NULL;
	return (memtot);
}

char	**ft_split(char const *s, char c)
{
	char	**memtot;
	char	*str;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)s;
	len = ft_lwords(str, c);
	memtot = (char **)malloc((len + 1) * sizeof(char *));
	if (!memtot)
		return (NULL);
	memtot = ft_submem(memtot, str, c, i);
	if (!memtot)
		return (NULL);
	return (memtot);
}

/*int	main(void)
{
	char	str[] = "  p jd  d";
	char	sep = ' ';

	char	**split = ft_split(str, sep);
	if (split)
	{
		int	i = 0;
		while (split[i])
		{
			printf("%s\n", split[i]);
			free(split[i]);
			i++;
		}
		free (split);
	}
	return (0);
}*/
