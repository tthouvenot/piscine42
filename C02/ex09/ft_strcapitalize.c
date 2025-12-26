/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 17:12:51 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/24 11:15:13 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 ||
			!((str[i-1] >= 'a' && str[i-1] <= 'z') ||
			  (str[i-1] >= 'A' && str[i-1] <= 'Z') ||
			  (str[i-1] >= '0' && str[i-1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	
// 	printf("avant la transformation: %s\n", str);
// 	printf("après la transformation: %s\n", ft_strcapitalize(str));

// 	return 0;
// }