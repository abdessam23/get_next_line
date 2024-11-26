/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abhimi <abhimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:25:46 by abhimi            #+#    #+#             */
/*   Updated: 2024/11/25 20:36:52 by abhimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFFER_SIZE 10

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_get_line(char *str);
char	*ft_add(char *p);
char	*read_sv(int fd, char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);

#endif
