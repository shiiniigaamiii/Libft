/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:20:07 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/01 14:29:44 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/
#include "libft.h"

int	ft_isprint(int a)
{
	return (a >= 32 && a <= 126);
}

/*int main()
{
	printf ("this is my code: %d", ft_isprint('\n'));
	printf ("\nthis is the original function", isprint('\n'));
}*/
