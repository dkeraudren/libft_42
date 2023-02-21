/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkeraudr <dkeraudr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:37:14 by dkeraudr          #+#    #+#             */
/*   Updated: 2023/02/21 18:38:58 by dkeraudr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// size_t	ft_strlen(char *s);
// char	*ft_strchr(char *s, int c);
// char	*ft_strjoin(char *left_str, char *buff);
char	*ft_get_line(char *left_str);
char	*get_next_line(int fd);

#endif