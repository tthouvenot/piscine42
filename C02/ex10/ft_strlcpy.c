/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:16:29 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/24 11:33:30 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int length;
	
	length = 0;
	while(src[length] != '\0')
	{
		length++;
	}
	if(size <= 0)
	{
		return(length);
	}
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}

// int main(void)
// {
// 	unsigned int size = 11;
// 	char *src = "Hello World";
// 	char dest[12];
	
	
// 	printf("Mot attendu: %s\n", src);
// 	ft_strlcpy(dest, src, size);
// 	printf("Mot reçu: %s\n", dest);
// 	return (0);
// }