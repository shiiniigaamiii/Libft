/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:32:56 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/16 18:18:06 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	if (!dst && !dstsize)
		return (0);
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	k = ft_strlen(dst);
	while (src[i] && k + 1 < dstsize)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	dst[k] = '\0';
	src = src + i;
	return (ft_strlen(src) + ft_strlen(dst));
}
/*int main()
{
    char a[20] = "this is";
    char b[] = "that";
    
    printf("%d %s", ft_strlcat(a, b, 4), a);
    
}*/
