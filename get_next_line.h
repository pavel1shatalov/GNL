/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 14:28:22 by ggerhold          #+#    #+#             */
/*   Updated: 2019/02/07 18:29:28 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 42

# include "libft/includes/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

int		get_next_line(const int fd, char **line);

#endif
