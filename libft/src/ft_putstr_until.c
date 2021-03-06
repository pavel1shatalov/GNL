/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_until.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggerhold <ggerhold@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 21:43:18 by ggerhold          #+#    #+#             */
/*   Updated: 2019/05/02 21:43:18 by ggerhold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putstr_until(char *s, char c)
{
	int	len;

	len = ft_strnchr(s, c, 1);
	if (len == -1)
		return (ft_putstr(s));
	else
		write(1, s, len);
	return (len);
}
