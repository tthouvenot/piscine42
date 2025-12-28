/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:05:40 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 11:14:29 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long temp_nbr;
	char digit;
	
	temp_nbr = nbr;
	if (temp_nbr < 0)
	{
		write(1, "-", 1);
		temp_nbr = -temp_nbr;
	}
	if (temp_nbr >= 10)
	{
		ft_putnbr(temp_nbr / 10);
	}
	digit = temp_nbr%10 + '0';
	write(1, &digit, 1);
}