/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:48:34 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/01 14:28:22 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *) b;
	while (len > 0)
	{
		*p++ = (unsigned char) c;
		len--;
	}
	return (b);
}

/*	int main()	{
	    char a[] = "111122222";
	    printf("%s \n", ft_memset(a, 'b', 30));
	    printf("%s", memset(a, 'b', 30));

	}*/
