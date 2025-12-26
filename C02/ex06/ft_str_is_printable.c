/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:59:54 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/21 17:01:48 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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