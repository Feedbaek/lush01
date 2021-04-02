/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   in_the_box.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 20:36:32 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/02 21:54:53 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	confirm_4(char *box[], int n)
{
	`)
	{
		n = 0;
		
	}
}

void	in_the_box(char *box[], char *cnt)
{
	int i;
	int n;
	
	i = 0;
	while (cnt[i])
	{
		if (cnt[i] == '4')
		{
			n = 0;
			if (i < 4)
				while (n < 4)
				{
					box[n][i] = n + 1 + '0';
					n++;
				}
			else	if (i < 8)
				while (n < 4)
				{
					box[n][i - 4] = 4 - n + '0';
					n++;
				}

		}
	}
}
