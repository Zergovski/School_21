/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:23:03 by kcustard          #+#    #+#             */
/*   Updated: 2020/10/19 22:05:44 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb != i)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int main()
{
	int a = 64;
	printf("%i\n", ft_is_prime(a));
	return(0);
}