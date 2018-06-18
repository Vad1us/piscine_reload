/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vradchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 16:05:54 by vradchen          #+#    #+#             */
/*   Updated: 2017/11/15 16:05:55 by vradchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRY_H
# define TRY_H

# include <unistd.h>
# include <fcntl.h>

# define BUFFER 10000
# define FEW "File name missing.\n"
# define MANY "Too many arguments.\n"
# define NOT_OPEN "File could not open.\n"

void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_r(char *n);

#endif
