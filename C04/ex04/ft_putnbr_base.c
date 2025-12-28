/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 09:34:29 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/28 10:00:30 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;		
	}	
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long temp_nbr;
	int base_len;
	
	temp_nbr = nbr;
	base_len = ft_check_base(base);
	if (base_len < 2)
		return;
	if (temp_nbr < 0)
	{
		write(1, "-", 1);
		temp_nbr = -temp_nbr;
	}
	if (temp_nbr >= base_len)
		ft_putnbr_base(temp_nbr / base_len, base);
	write(1, &base[temp_nbr%base_len], 1);
}