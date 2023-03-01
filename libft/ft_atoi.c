/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:11:10 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 12:05:38 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>*/
#include "libft.h"

int	ft_atoi(const char *ch)
{
	int		sign;
	long	res;
	long	i;

	i = 0;
	res = 0;
	sign = 0;
	while (ch[i] == 32 || (ch[i] >= 8 && ch[i] <= 20))
		i++;
	if (ch[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (ch[i] == '+')
		i++;
	while (ch[i] && ft_isdigit(ch[i]))
	{
		res = (res * 10) + (ch[i] - '0');
		i++;
	}
	if (sign == 1)
		return (-res);
	return (res);
}

/*void main()
{
	printf ("this is my coe - %d", ft_atoi("123"));
	printf (" \nthis is the original code - %d", atoi("123"));
}*/
