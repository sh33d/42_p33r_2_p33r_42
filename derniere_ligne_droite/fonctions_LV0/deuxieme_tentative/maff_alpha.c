/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 17:32:53 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/20 17:54:24 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha()
{
	char c;

	c = 97;
	while(c <= 122)
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar('\n');
}

int		main()
{
maff_alpha();
return (0);
}
