/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:16:04 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/01 14:22:07 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/
#include "libft.h"

int	ft_isascii(int a)
{
	return (a >= 0 && a <= 127);
}

/*int main()
{
	printf ("this is my code: %d", ft_isascii('\n'));
	printf ("\nthis is original function: %d", isascii('\n'));
}*/
