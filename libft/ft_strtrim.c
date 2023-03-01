/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:47:18 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/15 17:59:56 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}

/*int main()
{
    char i[] = " hello ";
    char c[] = " ";
   // int c = 4;
    printf ("This is my code - %s", ft_strtrim(i, c));
   // printf (" \nThis is the original code - %s", memset(i, 'b', 4));
}*/
/*int main()
{
    char i[] = " hello ";
    char c[] = " ";
   // int c = 4;
    printf ("This is my code - %s", ft_strtrim(i, c));
   // printf (" \nThis is the original code - %s", memset(i, 'b', 4));
}*/
