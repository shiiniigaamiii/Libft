/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:50:08 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/15 18:01:14 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_copy(const char *s, size_t size)
{
	char	*substr;
	char	*save;
	size_t	i;

	i = 0;
	substr = (char *)malloc(sizeof(char) * size + 1);
	if (!substr)
		return (NULL);
	save = substr;
	while (i++ < size)
		*substr++ = *s++;
	*substr = '\0';
	return (save);
}

int	findword(const char *str, char c)
{
	int		i;
	int		trigger;
	char	*strcopy;

	strcopy = (char *) str;
	i = 0;
	trigger = 0;
	while (*strcopy)
	{
		if (*strcopy != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*strcopy == c)
			trigger = 0;
		strcopy++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		k;
	int		save;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * findword(s, c) + 1);
	if (!split)
		return (NULL);
	while (i < findword(s, c) && s[k])
	{
		while (s[k] == c)
			k++;
		save = k;
		while (s[k] != c && s[k])
			k++;
		split[i] = ft_copy(&s[save], k - save);
		i++;
	}
	split[i] = NULL;
	return (split);
}

/*int main() 
{
    char *test = "To be or not to be";
    char c = ' ';
    char **split = ft_split(test,c);
    int i = 0;
    while(*split[i])
    {
        printf("%s", *split[i]);
        i++;
    }
//    printf("%d", findword("To be or not to be", ' '));
    return 0;
}*/
