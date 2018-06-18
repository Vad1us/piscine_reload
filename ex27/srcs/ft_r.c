/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:16:23 by vradchen          #+#    #+#             */
/*   Updated: 2017/11/15 17:16:25 by vradchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "try.h"

char	*ft_r(char *n)
{
	int		fd;
	int		size;
	char	buf[BUFFER];
	char	*ret;

	fd = open(n, O_RDONLY);
	if (fd <= 0)
		return (NOT_OPEN);
	else
	{
		size = read(fd, buf, BUFFER);
		buf[size] = '\0';
		close(fd);
		ret = buf;
		return (ret);
	}
}
