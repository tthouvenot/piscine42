/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 08:41:38 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 08:50:11 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main()
{
	int a = 15;
	int b = 5;
	int div = 0;
	int mod = 0;

	printf("Résultat attendu: 3, 0\n");
	ft_div_mod(a, b ,&div, &mod);
	printf("Résultat reçu: %d, %d\n", div, mod);
	return 0;
} */