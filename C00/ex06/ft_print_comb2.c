/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 19:34:48 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/20 19:59:19 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		left;
	int		right;
	char	a;
	char	b;
	char	c;
	char	d;
	
	left = 0;
	while (left <= 98)
	{
		right = left + 1;
		a = (left / 10) + '0';
		b = (left % 10) + '0';
		while (right <= 99)
		{
			c = (right / 10) + '0';
			d = (right % 10) + '0';
			
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (!(left == 98 && right == 99))
				write(1, ", ", 2);
			right++;	
		}
		left++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
	return (0);
} */