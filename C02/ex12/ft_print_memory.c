/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:24:51 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/26 13:06:51 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_memory_address(void *addr)
{
	unsigned long	address;
	char			*base;
	char			buf[16];
	int				i;

	base = "0123456789abcdef";
	address = (unsigned long)addr;
	i = 15;
	while (i >= 0)
	{
		buf[i] = base[address % 16];
		address /= 16;
		i--;
	}
	write(1, buf, 16);
	write(1, ":", 1);
}

void	ft_print_hexa(void *addr, int size)
{
	int i;
	unsigned char *hexa;
	char *base ="0123456789abcdef";

	hexa = (unsigned char *)addr;
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			write(1, &base[hexa[i] / 16], 1);
			write(1, &base[hexa[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_ascii(void *addr, int size)
{
	int i;
	unsigned char *str;
	
	str = (unsigned char*)addr;
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			if (str[i] >= 32 && str[i] <= 126)
				write(1, &str[i], 1);
			else
				write(1, ".", 1);
		}
		else
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int offset;
	
	offset = 0;
	if (size == 0)
		return 0;
	while(size != 0){
		ft_print_memory_address((unsigned char *)addr + offset);
		write(1, " ", 1);
		ft_print_hexa((unsigned char *)addr + offset, size);
		write(1, " ", 1);
		ft_print_ascii((unsigned char *)addr + offset, size);
		write(1, "\n", 1);
		if (size > 16)
			size -= 16;
		else
			size = 0;
		offset += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	char *str = "Bonjour	amis";
// 	int size = 12;
	
// 	ft_print_memory(str, size);
// 	write(1, "\n", 1);
// 	return (0);
// }