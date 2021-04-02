/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:00:14 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/02 21:44:33 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_cnt[16];
char	box[5][5];
void	in_the_box(char *cnt);

int	is_select(char *nbr)
{
	int i;

	i = 0;
	while(*nbr && i < 16)
	{
		if (*nbr != ' ')
		{
			g_cnt[i] = *nbr;
			i++;
		}
		nbr++;
	}
	if (i != 16)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}

int	main(int n, char* str[])
{
	if (i == 2)
	{
		if(!is_select(str[i]))
			return (0);
		in_the_box(box, g_cnt);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
