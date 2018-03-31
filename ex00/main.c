/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:31:57 by cking             #+#    #+#             */
/*   Updated: 2018/03/31 17:48:08 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "remove_spaces.c"
#include "find_brackets.c"
#include <stdio.h>

int		main(int ac, char **av)
{
	ac++;
	char test[2];
	test = find_brackets(remove_spaces(av[1]));
	printf("%d", test[0]);
	printf("%d", test[1]);
	return (0);
}
