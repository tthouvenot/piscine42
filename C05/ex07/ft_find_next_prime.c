/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tthouvenot <tthouvenot@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 11:48:49 by tthouvenot        #+#    #+#             */
/*   Updated: 2025/12/30 17:51:45 by tthouvenot       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int	d;

	if (nb <= 1)
		return (0);
	d = 2;
	while (d * d <= nb)
	{
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while(!ft_is_prime(nb))
		nb++;
	return(nb);
}