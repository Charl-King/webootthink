/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_spaces.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 12:21:22 by cking             #+#    #+#             */
/*   Updated: 2018/03/31 14:51:45 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*remove_spaces(char *str)
{
	int i;
	int j;
	char *out;
	
	i = 0;
	j = 0;
	out = (char *)malloc(sizeof(str));
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			out[j] = str[i];
			j++;
			i++;
		}
	}
	out[j] = '\0';
	return (out);
}
