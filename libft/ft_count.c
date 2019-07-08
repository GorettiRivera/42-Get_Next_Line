/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:52:49 by mrivera-          #+#    #+#             */
/*   Updated: 2019/06/04 12:27:54 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *str, char c)
{
	int i;
	int flag;
	int count;

	i = 0;
	flag = 0;
	count = 0;
	while (*str)
	{
		if (!flag && *str != c)
		{
			count++;
		}
		flag = (str[i] == c) ? 0 : 1;
		str++;
	}
	return (count);
}
