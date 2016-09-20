/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 17:55:31 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/20 18:04:48 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_revalpha()
{
	char c;

	c = 122;

	while(c >= 97)
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar('\n');
}

int		main()
{
	maff_revalpha();
	return (0);
}
