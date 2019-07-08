/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrivera- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:03:42 by mrivera-          #+#    #+#             */
/*   Updated: 2019/05/22 10:44:34 by mrivera-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = (len <= len2) ? len + 1 : len2 + 1;
	len = (len <= n) ? len : n;
	result = ft_memcmp(s1, s2, len);
	return (result);
}
