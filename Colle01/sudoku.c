/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cking <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 11:59:29 by cking             #+#    #+#             */
/*   Updated: 2018/03/24 12:23:41 by cking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	int		grid[9][9];
	int 	index = 0;
	int		jndex = 0;

	while (index < 9)
	{
		while (jndex < 9)
		{
			grid[index][jndex] = argv[index+1][jndex];
			jndex++;
		}
		jndex = 0;
		index++;
	}
}
