/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:30:54 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/20 19:13:54 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int	main()
{
	char *str = "Hello World! \n";
	int i = 0;
	while(str[i] != '\0')
	{
		ft_puchar(str[i]);
		i++;
	}
} */