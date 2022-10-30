/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone_repo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:31:13 by johmatos          #+#    #+#             */
/*   Updated: 2022/10/30 12:47:36 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/42init.h"
#include <stdlib.h>

int	clone_libft(void)
{
	char	*url;
	char	*choices[] = {PROJECTS};

	printf("Init libft\n");
	url = ft_alloc(sizeof(char),
				ft_strlen(GITHUB_BASE) + ft_strlen(choices[0] + 1));
	ft_strlcat(url, GITHUB_BASE, ft_strlen(GITHUB_BASE));
	ft_strlcat(url, choices[0], ft_strlen(choices[0]));
	printf("Init libft\n");
	printf("%s", url);
	return (0);
}
