/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:16:19 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/08 22:06:39 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int ft_is_lower(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char *test[3] = {"s", "bc", "g"};
	printf("%d", ft_count_if(test, &ft_is_lower));
	return (0);
}
