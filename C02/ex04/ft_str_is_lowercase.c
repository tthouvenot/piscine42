/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:57:18 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 16:58:02 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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