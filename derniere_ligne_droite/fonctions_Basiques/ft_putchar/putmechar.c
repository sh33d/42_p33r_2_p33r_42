/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putmechar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: husbordo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 19:56:52 by husbordo          #+#    #+#             */
/*   Updated: 2016/09/20 20:01:51 by husbordo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putmechar()
{
	int c;

	c = "100";
}

int		main()
{
	putmechar();
	return (0);
}
