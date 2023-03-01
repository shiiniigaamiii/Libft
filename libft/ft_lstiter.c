/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmusay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:48:26 by marmusay          #+#    #+#             */
/*   Updated: 2023/02/16 13:53:31 by marmusay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

/*int main()
{
	t_list *list

	list = ft_lstnew("hello");
	list -> next = ft_lstnew("Barev");
	list -> next - next = ft_lstnew("Privet");
	ft_lstiter(lst, f);
	while (lst)
	{
		printf("%s\n", lst -> content);
		lst = lst -> next;
	}
}*/
