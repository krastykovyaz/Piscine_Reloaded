/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 10:38:37 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/09 23:36:47 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	if (nb == 0 || nb == 1)
		return (1);
	else if ((nb < 0) || (nb > 12))
		return (0);
	else
	{
		res = 1;
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
}
