/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:18:42 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 09:29:32 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *str1 = "Bonjour";
// 	char *str2 = "Bonjou";
// 	unsigned int nbr = 12;
// 	int diff = ft_strncmp(str1, str2, nbr);
// 	int realdiff = strncmp(str1, str2, nbr);
	
// 	printf("Différence attendu : %d\n", realdiff);
// 	printf("La différence est de : %d\n", diff);
// 	return(0);
// }