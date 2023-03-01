/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:32:18 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 13:46:48 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!p)
		return (0);
	while (*s1)
	{
		p[i++] = *s1++;
	}
	p[i] = '\0';
	return (p);
}
