/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 11:25:36 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/17 15:06:04 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char*)s1 != (*(unsigned char*)s2))
		{
			return ((*(unsigned char*)s1) - (*(unsigned char*)s2));
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
