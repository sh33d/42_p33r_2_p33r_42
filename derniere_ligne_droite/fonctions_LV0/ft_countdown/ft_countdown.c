/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 17:12:49 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/20 18:20:59 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
write(1, &c, 1);
}

void	ft_countdown()
{
	char c;

	c = '9';
	while(c >= '0')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}

int		main()
{
	ft_countdown();
	return (0);
}
