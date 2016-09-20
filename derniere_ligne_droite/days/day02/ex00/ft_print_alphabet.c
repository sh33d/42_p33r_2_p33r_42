/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:10:12 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/17 19:29:07 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
write(1, &c, 1);
}

void	ft_print_alphabet(void)
{ 
char c;

c = 'a';
while (c <= 'z')
	{
	ft_putchar(c);
	c++;
	}
}

int		main(void)
{
ft_print_alphabet(void);
return (0);
}
