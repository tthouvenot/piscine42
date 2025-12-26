/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:35:04 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/24 18:23:37 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_prt_hexa(unsigned char c)
{
	char *base = "0123456789abcdef";
	char hex[2];

	hex[0] = base[c / 16];
	hex[1] = base[c % 16];

	write(1, "\\", 1);
	write(1, hex, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_prt_hexa((unsigned)str[i]);	
		i++;
	}
}

// int main(void)
// {
// 	char *str = "Hello\nHow are you?";
	
// 	ft_putstr_non_printable(str);
// 	return (0);
// }