/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choices.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:19:47 by johmatos          #+#    #+#             */
/*   Updated: 2022/10/30 12:37:06 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/42init.h"

int	choices(void)
{
	char	*choice;
	printf("\nDo you want to use libft?\nuse [Y]es or [N]o:\n");
	choice = get_next_line(0);
	if (choice[0] == 'y')
		clone_libft();
	return (0);
}
