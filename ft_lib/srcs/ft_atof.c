/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:44:43 by dkeraudr          #+#    #+#             */
/*   Updated: 2023/02/26 11:31:55 by dkeraudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

double	get_decimal(const char *str)
{
	double	result;
	double	decimal;
	int		i;

	i = 0;
	result = ft_atoi(str + i);
	if (str[i] == '.')
		i++;
	decimal = ft_atoi(str + i);
	while (decimal >= 1)
		decimal /= 10;
	result += decimal;
	return (result);
}

double	ft_atof(const char *str)
{
	int			sign;
	int			i;

	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	return (sign * get_decimal(str + i));
}
