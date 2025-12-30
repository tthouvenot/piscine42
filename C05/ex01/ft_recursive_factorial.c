/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:37:38 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/28 10:46:08 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int ft_recursive_factorial(int nb)
{
	int result;
	
	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

// int main()
// {
// 	int nb = 7;
	
// 	printf("Résultat attendu: 5040\n");
// 	printf("Résultat reçu: %d\n", ft_recursive_factorial(nb));
// 	return (0);
// }