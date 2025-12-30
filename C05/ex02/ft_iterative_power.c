/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:49:32 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/28 10:59:05 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if(power < 0)
		return (0);
	if(power == 0)
		return (1);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int main()
// {
// 	int power = 10;
// 	int nb = 3;
	
// 	printf("Résultat attendu: 27\n");
// 	printf("Résultat reçu: %d\n", ft_iterative_power(nb, power));
// 	return (0);
// }