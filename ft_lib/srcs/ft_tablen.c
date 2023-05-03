/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:21:08 by dkeraudr          #+#    #+#             */
/*   Updated: 2023/04/30 18:28:51 by dkeraudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_tablen(char **table)
{
	int	i;

	i = 0;
	while (table[i])
		i++;
	return (i);
}
