/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:21:51 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 11:40:35 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - s2[i]);
		}
		else if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*int main(void)
{
    char str1[] = "hell0";
    char str2[] = "";
    
    printf("original function: %d\n", strncmp(str1, str2, 2));
     printf("my function: %d", ft_strncmp(str1, str2, 2));
}*/
