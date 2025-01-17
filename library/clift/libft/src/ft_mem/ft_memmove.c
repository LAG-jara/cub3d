/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:13:19 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/02/19 17:31:38 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	count;

	count = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		while (count < len)
		{
			*((char *)(dst + count)) = *((char *)(src + count));
			count++;
		}
	}
	else
	{
		while (0 < len)
		{
			*((char *)((dst - 1) + len)) = *((char *)((src - 1) + len));
			len--;
		}
	}
	return (dst);
}
