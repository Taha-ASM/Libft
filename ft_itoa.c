/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 16:47:42 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/21 23:18:11 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	nb_len(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb <= 0)
	{
		count++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*arr;

	nb = n;
	len = nb_len(n);
	arr = malloc((len + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	arr[len] = '\0';
	len--;
	if (nb < 0)
	{
		arr[0] = '-';
		nb = nb * -1;
	}
	if (nb == 0)
		arr[len] = nb + '0';
	while (nb > 0)
	{
		arr[len] = (nb % 10) + '0';
		len--;
		nb /= 10;
	}
	return (arr);
}
