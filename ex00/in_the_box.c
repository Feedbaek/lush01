/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_the_box.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:36:32 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/03 22:15:03 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*g_per;
int		***g_way;

int		*li(int *a)
{
	int i;

	i = 0;
	while (i < 4)
	{
		a[i] = i + 1;
		i++;
	}
	return (a);
}

int		*in_the_box(int **box, int i, int j)
{
	int x;
	int y;
	int *list;
	int n;
	int k;

	n = 0;
	k = 0;
	list = li(list);
	while (k < 4)
	{
		x = 0;
		y = 0;
		while (x < 4)
			if (box[x++][j] == list[k])
				break ;
		while (y < 4)
			if (box[i][y++] == list[k])
				break ;
		if (x == 4 && y == 4)
			g_per[n++] = list[k];
		k++;
	}
	return (g_per);
}

void	rooop(int **box)
{
	int x;
	int y;

	x = 0;
	while (x++ < 4)
	{
		y = 0;
		while (y++ < 4)
			if (box[x][y] == 0)
				g_way[x][y] = in_the_box(box, x, y);
	}
}

int		main(void)
{
	int a[4][4];
	rooop(a);
	return (0);
}
