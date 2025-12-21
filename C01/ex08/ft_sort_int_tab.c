/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 09:41:22 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 09:53:32 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	
	i = 0;
	while (i < size -1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if(tab[j] > tab[j+1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/* int main()
{
	int size = 5;
	int tab[5] = {8,3,6,5,1};
	int i = 0;

	printf("Valeurs avant modification:\n");	
	while(i < size)
	{
		printf("%d", tab[i]);	
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
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