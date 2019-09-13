/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 19:41:03 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/05 20:13:37 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (nb != i * i)
	{
		if (i * i > nb || nb < 0)
			return (0);
		i++;
	}
	return (i);
}
