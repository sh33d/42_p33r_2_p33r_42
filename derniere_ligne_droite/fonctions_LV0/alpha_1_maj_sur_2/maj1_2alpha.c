/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maj1_2alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 18:24:29 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/20 18:38:14 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void majmoica()
{
	char c;

	c = 97;
	while(c <= 122)
	{
		if (c % 2)
			ft_putchar(c);
		else
			ft_putchar(c - 32);
			c++;
	}
	ft_putchar('\n');
}

int		main()
{
	majmoica();
	return (0);
}
