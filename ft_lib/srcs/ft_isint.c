/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 10:39:05 by dkeraudren        #+#    #+#             */
/*   Updated: 2024/03/22 19:56:27 by dkeraudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_isint(const char *str)
{
	int	i;

	if (ft_strlen(str) > 11)
		return (0);
	else if (ft_strlen(str) == 11)
	{
		if (str[0] == '-' && ft_strncmp(str, "-2147483648", 11) > 0)
			return (0);
		if (str[0] == '+' && ft_strncmp(str, "+2147483647", 11) > 0)
			return (0);
	}
	else if (ft_strlen(str) == 10
		&& ft_strncmp(str, "2147483647", 10) > 0 && str[0] != '-')
		return (0);
	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
