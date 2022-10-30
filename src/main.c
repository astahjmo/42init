/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:53:10 by johmatos          #+#    #+#             */
/*   Updated: 2022/10/30 12:36:30 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/42init.h"

int	main(void)
{
	char	rootdir[PATH_MAX];

	if(!getcwd(rootdir, sizeof(rootdir)))
		exit_failure("Invalid path");
		
	printf("Starting the init 42 repo on this root dir:\n%s", rootdir);
	choices();
}
