/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 09:36:08 by mobabeke          #+#    #+#             */
/*   Updated: 2023/01/29 12:02:56 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <limits.h>
# include<unistd.h>
# include<stdio.h>
# include<fcntl.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*new_line(const char *temp, int c);
char	*jeofree(char *stash, char *temp);
char	*copy_to_stash(int fd, char *stash);
int		ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*create_line(char *stash);
char	*what_next(char *stash);
void	*ft_calloc(size_t nitems, size_t size);
void	ft_bzero(void *s, int nbyte);
void	*ft_memset(void *str, int c, size_t n);

#endif