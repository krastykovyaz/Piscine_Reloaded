/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 22:00:18 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/09 09:55:23 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int i;
	int *res = ft_range(0, 0);
	if (res)
	{
		i = 0;
		while (i < 5)
		{
			printf("%d", res[i]);
			i++;
		}
	}
	else
		printf("NULL\n");
	return (0);
}
