/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 09:03:01 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/05 09:07:56 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a, b;

	a = 5;
	b = 10;
	ft_swap(&a, &b);
	printf ("%d %d", a, b);
	return (0);
}