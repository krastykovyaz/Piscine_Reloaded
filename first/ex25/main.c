/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 23:10:25 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/07 23:17:22 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void ft_putnbr(int n)
{
	printf("%d", n);
}

int main(void)
{
	int test[] = {2, 4, 9, 3};
	ft_foreach(test, 3, ft_putnbr);
	return (0);
}
