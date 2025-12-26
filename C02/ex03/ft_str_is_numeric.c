/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:52:41 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 16:55:59 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/* int	main()
{
	char *str = "Hello World";
	
	if(ft_str_is_alpha(str))
	{
		printf("%s contient que des lettres\n", str);
	}
	else
	{
		printf("%s ne contient pas que des lettres\n", str);
	}
	return 0;
} */