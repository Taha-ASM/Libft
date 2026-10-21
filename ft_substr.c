/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:49:52 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/19 11:43:55 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	j;
	char	*arr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	arr = malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		arr[j] = s[start + j];
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
