/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:24:47 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/18 13:39:39 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

/*int main()
{
	printf("this is my code: %d\n", ft_strlen("hello"));
	printf("this is the original: %d", strlen("hello"));
}*/
