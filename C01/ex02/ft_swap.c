/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 08:36:49 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 08:41:04 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int proxy_number;
	
	proxy_number = *a;
	*a = *b;
	*b = proxy_number;
}

/* int	main()
{
	int	a = 2;
	int b = 4;
	
	printf("Avant swap: %d%d\n", a, b);
	ft_swap(&a, &b);
	printf("Après swap: %d%d\n", a, b);
	
	return 0;
} */