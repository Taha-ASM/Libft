/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 02:44:57 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/15 10:22:26 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	n = 0;
	if (little[0] == 0)
		return ((char *)(big));
	while (big[n] && n < len)
	{
		i = 0;
		while (big[n + i] == little[i] && n + i < len && little[i])
			i++;
		if (little[i] == '\0')
			return ((char *)(&big[n]));
		n++;
	}
	return (NULL);
}
