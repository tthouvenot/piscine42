/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:17:35 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 08:13:23 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_last(int *combination, int n)
{
	int	i;
	int	expected;

	i = 0;
	expected = 10 - n;
	while (i < n)
	{
		if (combination[i] != expected)
			return (0);
		expected++;
		i++;
	}
	return (1);
}

void	ft_print(int *combination, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = combination[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

void	ft_build(int index, int last_digit, int *combination, int n)
{
	int	current_value;
	
	if (index == n)
	{
		ft_print(combination, n);
		if(!is_last(combination, n))
			write(1, ", ", 2);
		return;
	}
	current_value = last_digit + 1;
	while (current_value <= 9)
	{
		combination[index] = current_value;
		ft_build(index + 1, current_value, combination, n);
		current_value++;
	}
}

void	ft_print_combn(int n)
{
	int combination[10];
	
	if (n <= 0 || n > 10)
		return;
	ft_build(0, -1, combination, n);
}

/* int	main(void)
{
	int number = 3;
	ft_print_combn(number);
	return (0);	
} */
