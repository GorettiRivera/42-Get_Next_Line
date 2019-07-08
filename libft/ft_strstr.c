/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:20:42 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/07 15:14:59 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (&str[i]);
	while (str[i])
	{
		while ((str[i + j] == to_find[j]) && to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		j = 0;
		i++;
	}
	return (0);
}
