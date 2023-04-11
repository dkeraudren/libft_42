/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isfloat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 19:42:45 by dkeraudr          #+#    #+#             */
/*   Updated: 2023/04/11 20:31:37 by dkeraudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	check_format(const char *str)
{
	int	i;
	int	dot_cnt;
	int	e_cnt;

	i = 0;
	dot_cnt = 0;
	e_cnt = 0;
	if (ft_issign(str[i]))
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else if (str[i] == "e" || str[i] == "E" && !e_cnt)
		{
			e_cnt ++;
			i++;
		}
		else if (str[i] == "." && !dot_cnt && !e_cnt)
		{
			dot_cnt++;
			i++;
		}
		else
			return (0);
	}
	return (1);
}

// 6 - 7 -> significant digits
// check if string contains digits and potentialy one . and on e
int	ft_isfloat(char *str)
{
	return (1);
}
