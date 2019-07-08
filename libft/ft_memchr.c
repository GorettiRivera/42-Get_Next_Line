/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 10:20:26 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/21 14:41:33 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	int				new_n;
	unsigned char	to_find;

	i = 0;
	to_find = (unsigned char)c;
	new_n = (int)n;
	while (i < new_n)
	{
		if (((unsigned char*)s)[i] == to_find)
		{
			return (&((unsigned char*)s)[i]);
		}
		else
			i++;
	}
	return (NULL);
}
