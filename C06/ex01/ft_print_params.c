/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 18:03:46 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/30 18:07:57 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *param)
{
	int i;
	
	i = 0;
	while (param[i] != '\0')
	{
		write(1, &param[i], 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;
	
	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}