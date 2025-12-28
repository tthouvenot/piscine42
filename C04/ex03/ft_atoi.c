/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 11:20:56 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/28 09:33:30 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int sign;
	int i;
	int result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	char *str = "   -++-+-+---9854ab26";
// 	int nbr = ft_atoi(str);
// 	printf("Valeur attendue: 9854\n");
// 	printf("Valeur reçu: %d\n", nbr);
// 	return (0);
// }