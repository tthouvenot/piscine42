/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:01:30 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/20 20:15:18 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	number;
	char	digit;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if(number >= 10)
	{
		ft_putnbr(number / 10);
	}
	digit = (number % 10) + '0';
	write(1, &digit, 1);
}

/* int	main(void)
{
	int	nbr = -196;
	ft_putnbr(nbr);
	return (0);	
} */