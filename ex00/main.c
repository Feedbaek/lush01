/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:00:14 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/03 22:43:11 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	g_cnt[16];
char	**box;
char	in_the_box(char *box);

void	error(void)
{
	write(1, "Error\n", 6);
}

int	is_select(char *nbr)
{
	int i;

	i = 0;;
	while(*nbr && i < 16)
	{
		if (*nbr >= '0' && *nbr <= '9')
		{
			g_cnt[i] = *nbr;
			i++;
		}
		else if (!(*nbr == ' '))
			return (0);
		nbr++;

	}
	if (i != 16)
		return (0);
	return (1);
}

int	main(int n, char* str[])
{
	int i;
	int j;
	
	i = 0;
	box = (char **)malloc(sizeof(char*) * 4);
	while (i < 4)
		box[i++] = (char *)malloc(sizeof(char) * 4);
	if (n == 2 && is_select(str[1]))
		in_the_box(box);
	error();
	i = 0;
	while (i < 4)
		free(box[i++]);
	free(box);
	return (0);
}
