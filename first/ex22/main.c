/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 10:15:09 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/07 10:23:03 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_abs.h"

int main(int ac, char **av)
{
	printf("%ld",ABS(strtol(av[1], NULL, 10)));
	return (0);
}
