/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:34:44 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/14 15:37:25 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*arr;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (s1[i])
	{
		while (s1[i] != set[i])
			len++;
		i++;
	}
	arr = malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		while (s1[i] != set[i])
			arr[j++] = s1[i++];
		i++;
	}
	return (arr);
}

int	main(void)
{
	char *s1 = ".taha.";
	char *set = ".";
	char *arr = ft_strtrim(s1, set);
	printf("%s\n", arr);
	return (0);
}