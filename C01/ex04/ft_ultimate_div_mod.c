/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 08:51:30 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 08:56:05 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int proxy_number;
	
	proxy_number = *a;
	*a = *a / *b;
	*b = proxy_number % *b;
}

/* int main()
{
	int a = 15;
	int b = 3;
	
	printf("Résultat attendu: 5, 0\n");
	ft_ultimate_div_mod(&a, &b);
	printf("Résultat reçu: %d, %d\n", a, b);
	return 0;
} */