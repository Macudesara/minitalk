/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:52:48 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/18 11:56:54 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

/*Upper case to lower case letter conversion 
or the same character unchanged if it is not a letter.*/

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	else
		return (c);
}

/*int main(void) 
{    
    char    letter;

    letter = 'K';
    printf("Original uppercase: %c\n", letter);
    printf("Original lowercase: %c\n", tolower(letter));
    printf("Created uppercase: %c\n", letter);
    printf("Created lowercase: %c", ft_tolower(letter));
    return 0;
}*/
