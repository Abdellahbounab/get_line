/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abounab <abounab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:46:45 by abounab           #+#    #+#             */
/*   Updated: 2024/02/09 13:46:47 by abounab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);

size_t	ft_strlen(char *s);

char	*ft_strjoin(char *s1, char *s2);

size_t	until_line(char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_get_line(char *str);

char	*ft_read_buff(int fd, char *str);

char	*ft_update(char *str);

char	*ft_strdup(const char *s1);

#endif