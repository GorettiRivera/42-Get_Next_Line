/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 13:38:11 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/21 14:44:14 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*s3;
	unsigned char	*s4;

	i = 0;
	s3 = (unsigned char*)s1;
	s4 = (unsigned char*)s2;
	while ((s3[i] || s4[i]) != 0)
	{
		if (s3[i] == s4[i])
		{
			i++;
		}
		else
			return (s3[i] - s4[i]);
	}
	return (0);
}
