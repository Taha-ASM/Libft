/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tait-si <tait-si@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:53:13 by tait-si           #+#    #+#             */
/*   Updated: 2026/10/15 10:23:31 by tait-si          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sr;

	dst = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	if (dst > sr)
	{
		while (n > 0)
		{
			n--;
			dst[n] = sr[n];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dest);
}
