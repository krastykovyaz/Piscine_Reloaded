/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 19:30:38 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/09 10:39:58 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int num;
	int delta;

	delta = max - min;
	if (max <= min)
		return (0);
	arr = (int*)malloc(sizeof(*arr) * delta);
	if (arr)
	{
		num = 0;
		while (num < delta)
		{
			arr[num] = min;
			num++;
			min++;
		}
	}
	return (arr);
}
