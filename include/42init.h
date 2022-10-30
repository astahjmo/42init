/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42init.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:53:53 by johmatos          #+#    #+#             */
/*   Updated: 2022/10/30 12:41:09 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "get_next_line_bonus.h"

# define GITHUB_BASE "https://github.com/astahjmo/"
# define PROJECTS "libft", "printf", "get_next_line"

void	exit_failure(char *error);
int		choices(void);
int		clone_libft(void);
#endif
