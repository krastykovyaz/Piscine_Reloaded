/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 20:49:49 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/05 21:02:30 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putstr("  ");
	return (0);
}
