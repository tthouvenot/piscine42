/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:09:14 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/30 11:06:30 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	char fibo[160];
	int i;
	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = 0;
	while (i != index + 1)
	{
		if (i == 0)
			fibo[i] = 0;
		if (i == 1)	
			fibo[i] = 1;
		else
			fibo[i] = fibo[i-1] + fibo[i-2];
		i++;
	}
	return (fibo[index]);	
}