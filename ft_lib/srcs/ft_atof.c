/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:44:43 by dkeraudr          #+#    #+#             */
/*   Updated: 2023/02/12 15:11:51 by dkeraudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"
# include <stdio.h>

double	ft_atof(const char *str)
{
	double		result;
	double		decimal;
	int			sign;
	int			i;

	result = 0;
	decimal = 0;
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
	while (ft_isdigit(str[i]))
		result = result * 10 + (str[i++] - '0');
	if (str[i] == '.')
		i++;
	decimal = ft_atoi(str + i);
	while (decimal >= 1)
		decimal /= 10;
	result += decimal;
	return (result * sign);
}