/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:44:30 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 11:57:23 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		cc;
	unsigned const char	*ss;

	ss = s;
	cc = (unsigned char) c;
	while (n--)
	{
		if (*ss == cc)
		{
			return ((void *) ss);
		}
		ss++;
	}
	return (0);
}

/*int main()
{
    const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
    
    printf("%s", ft_memchr(str, ch, strlen(str)));
    
}*/
