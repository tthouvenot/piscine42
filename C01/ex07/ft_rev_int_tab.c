/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 09:07:33 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 09:39:34 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp_tab[100];

	i = 0;
	j = size -1;
	while(i < size)
	{
		temp_tab[i] = tab[i];
		i++;
	}
	i = 0;
	while(j >= 0)
	{
		tab[i] = temp_tab[j];
		i++;
		j--;
	}
}

/* int main()
{
	int size = 5;
	int tab[5] = {2,3,4,5,6};
	int i = 0;

	printf("Valeurs avant modification:\n");	
	while(i < size)
	{
		printf("%d", tab[i]);	
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	i = 0;
	printf("Valeurs avant modification:\n");	
	while(i < size)
	{
		printf("%d", tab[i]);	
		i++;
	}
	printf("\n");
	return 0;
} */