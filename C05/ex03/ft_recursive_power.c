/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:59:53 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/28 11:06:01 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if(power < 0)
		return (0);
	if(power == 0)
		return (1);
	result *= nb * ft_recursive_power(nb, power - 1);
	return (result);
}

// int main()
// {
// 	int power = 10;
// 	int nb = 3;
	
// 	printf("Résultat attendu: 59049\n");
// 	printf("Résultat reçu: %d\n", ft_recursive_power(nb, power));
// 	return (0);
// }