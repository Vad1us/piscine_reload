/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 19:01:17 by vradchen          #+#    #+#             */
/*   Updated: 2017/11/14 19:01:18 by vradchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print(char **argv)
{
	int		i;
	int		k;

	k = 0;
	i = 1;
	while (argv[i])
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

int		main(int argc, char **argv)
{
	int		i;
	int		k;
	char	*t1;

	k = 0;
	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			t1 = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = t1;
			i = 0;
		}
		i++;
	}
	ft_print(argv);
	return (0);
}
