/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 13:35:47 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/06 15:33:36 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_st_l(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(ft_st_l(src) + 1);
	if (p)
	{
		while ((p[i] = src[i]) != '\0')
			i++;
	}
	return (p);
}
