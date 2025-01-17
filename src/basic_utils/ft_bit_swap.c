/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bit_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:42:56 by cpeset-c          #+#    #+#             */
/*   Updated: 2024/02/18 17:42:59 by cpeset-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bit_swap(int a, int b)
{
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
}
