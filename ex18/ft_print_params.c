/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:53:31 by vradchen          #+#    #+#             */
/*   Updated: 2017/11/14 18:53:33 by vradchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		k;

	k = 0;
	i = 1;
	if (argc < 2)
		return (0);
	while (argc > i)
	{
		while (argv[i][k])
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		k = 0;
		i++;
	}
}
