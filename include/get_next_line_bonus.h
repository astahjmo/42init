/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:14:22 by johmatos          #+#    #+#             */
/*   Updated: 2022/10/30 12:41:40 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# define MAX_FD 1024
# define BUFFER_SIZE 1024

char	*get_next_line(int fd);
char	*ft_alloc(size_t mem, size_t size);
char	*ft_new_buffer(char *s1, char *s2);
#endif
