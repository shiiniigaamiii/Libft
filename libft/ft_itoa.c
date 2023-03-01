/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:18:05 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 14:55:03 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len ++;
	}
	return (len);
}

char	*ft_putnmbr(int n, int len, char *result)
{
	int	i;

	if (n < 0)
	{
		result[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
	{
		if (n < 0)
		{
			result[len] = '0' + (n % 10) * (-1);
			n = n / 10;
		}
		else
		{
			result[len] = n % 10 + '0';
			n = n / 10;
		}
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	len = get_len(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	ft_putnmbr(n, len, result);
	return (result);
}

/*int main() {

    int a = 123;
    printf("%s", ft_itoa(12));

    return 0;
}*/
