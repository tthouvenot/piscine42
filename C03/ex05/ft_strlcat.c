/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 10:29:25 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/27 10:54:34 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;	
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int result;
	unsigned int src_len;

	if (size == 0)
		return (0);
	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	result = i + src_len;
	if (size <= i)
		return (result);
	while (j < (size - i - 1) && src[j] !='\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);	
}
