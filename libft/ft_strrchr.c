/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 16:00:04 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 11:39:18 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	const char		*ss;
	int				slen;

	cc = (char) c;
	ss = s;
	slen = ft_strlen(s);
	while (slen + 1)
	{
		if (ss[slen] == cc)
		{
			return ((char *)(ss + slen));
		}
		slen--;
	}
	return (0);
}

/*int main()
{
    const char string[] = "http://www.tutorialspoint.com";
    const char ch = 'a';
    
    printf("%s", ft_strchr(string, ch));
}*/
