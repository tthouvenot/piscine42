/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 09:32:07 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 09:47:20 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return(dest);
}

// int main()
// {
// 	char src[] = "World";
// 	char dest[50] = "Bonjour ";
// 	char *final = ft_strcat(dest, src);
// 	char *realfinal = strcat(dest, src);
	
// 	printf("Différence attendu : %s\n", realfinal);
// 	printf("La différence est de : %s\n", final);
// 	return(0);
// }