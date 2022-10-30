/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:08:13 by johmatos          #+#    #+#             */
/*   Updated: 2022/10/30 12:15:28 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/42init.h"
#include <stdlib.h>

void	exit_failure(char *error)
{
	fprintf(stderr, "%s", error);
	exit(EXIT_FAILURE);
}
