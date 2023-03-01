/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:32:36 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 11:57:04 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*destin;
	unsigned const char	*source;
	size_t				i;

	destin = (unsigned char *) dst;
	source = (unsigned const char *) src;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		destin[i] = source[i];
		i++;
	}
	return (dst);
}

/*int main()    {
        char a[] = "am i stupid";
        char b[] = "yes you are";
       printf("%s \n", ft_memcpy(a, b, 15));
      //printf("%s", memcpy(a, b, 15));

}*/
