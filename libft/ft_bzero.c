/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:53:24 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/16 12:59:34 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *) b;
	while (i < len)
	{
		p[i] = '\0';
		i++;
	}
	return (0);
}

/*int main()
{
	char a[] = "111122222";
	printf("%s \n", ft_memset(a, 4));
	//printf("%s", memset(a, 'b', 30));
}*/
