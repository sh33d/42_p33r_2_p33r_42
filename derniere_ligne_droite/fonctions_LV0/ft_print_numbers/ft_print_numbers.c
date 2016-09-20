/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 18:06:40 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/20 18:13:02 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers()
{
	char c;

	c = '0';
	while(c <= '9')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}

int		main()
{
ft_print_numbers();
return (0);
}
