/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:24:00 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/23 15:18:13 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	s = (unsigned const char *) src;
	d = (unsigned char *) dst;
	if (!dst && !src)
	{
		return (NULL);
	}
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
		return (dst);
	}
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*int main()    {
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
        // char b[] = "aes you";
       printf("%s \n", ft_memmove(sResult + 1, sResult, 2));
      //printf("%s", memcpy(a, b, 15));

}*/
