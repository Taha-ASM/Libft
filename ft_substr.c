/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:49:52 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/14 14:21:32 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	arr = malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[start] == s[i])
		{
			while (len)
			{
				arr[j] = s[start];
				len--;
				start++;
				j++;
			}
		}
		i++;
	}
	arr[j] = '\0';
	return (arr);
}
