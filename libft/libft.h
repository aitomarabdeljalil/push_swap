/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:12:35 by aait-oma          #+#    #+#             */
/*   Updated: 2022/02/23 14:49:12 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFFER_SIZE 4096

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdbool.h>

int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strndup(const char *src, size_t size);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
