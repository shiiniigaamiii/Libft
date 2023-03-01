/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:29:56 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/13 11:52:51 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
		write (fd, "-2147483648", 11);
	else if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb;
		ft_putnbr_fd (nb, fd);
	}
	else if (nb < 10)
	{
		c = nb + '0';
		write(fd, &c, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
		c = (nb % 10) + '0';
		write (fd, &c, 1);
	}
}
