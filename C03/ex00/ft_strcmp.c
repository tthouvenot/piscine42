/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:09:22 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 09:15:34 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]); 
		i ++;
	}
	return (s1[i] - s2[i]);
}

// int main()
// {
// 	char *str1 = "Bonjour";
// 	char *str2 = "Bonjou";
// 	int diff = ft_strcmp(str1, str2);
// 	int realdiff = strcmp(str1, str2);
	
// 	printf("Différence attendu : %d\n", realdiff);
// 	printf("La différence est de : %d\n", diff);
// 	return(0);
// }