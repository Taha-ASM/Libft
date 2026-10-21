/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:22:24 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/17 11:44:15 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	x;
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	arr = malloc((s1_len + s2_len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i])
		arr[x++] = s1[i++];
	i = 0;
	while (s2[i])
		arr[x++] = s2[i++];
	arr[x] = '\0';
	return (arr);
}
