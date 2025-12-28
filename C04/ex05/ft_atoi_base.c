/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 10:03:32 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/28 10:19:30 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;		
	}	
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int sign;
	int i;
	int j;
	int result;

	sign = 1;
	i = 0;
	result = 0;
	if (ft_check_base(base) < 2)
		return (0);
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
	while (str[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0' && base[j] != str[i])
			j++;
		if (base[j] == '\0')
			break;
		result = result * ft_check_base(base) + j;
		i++;
	}
	return (result * sign);
}
