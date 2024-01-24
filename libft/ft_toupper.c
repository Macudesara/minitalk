/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-sara <mde-sara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:18:38 by mde-sara          #+#    #+#             */
/*   Updated: 2023/05/18 11:51:46 by mde-sara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <string.h>*/

/*Lower case to upper case letter conversion 
or the same character unchanged if it is not a letter.*/

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (c - 32);
	else
		return (c);
}

/*int main(void) 
{    
    char    letter;

    letter = 'k';
    printf("Original lowercase: %c\n", letter);
    printf("Original uppercase: %c\n", toupper(letter));
    printf("Created lowercase: %c\n", letter);
    printf("Created uppercase: %c", ft_toupper(letter));

    return 0;
}*/
