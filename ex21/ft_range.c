/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:06:33 by vradchen          #+#    #+#             */
/*   Updated: 2017/11/15 14:06:34 by vradchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *a;
	int i;

	i = 0;
	if (min < max)
	{
		a = (int*)(malloc(sizeof(int) * (max - min)));
		while (min < max)
		{
			a[i] = min;
			min++;
			i++;
		}
	}
	else
		return (0);
	return (a);
}
