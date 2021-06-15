/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 18:36:54 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/31 19:18:37 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

int main()
{
	char *a;
	a = "Darling\n";
	ft_strlen (a);
	printf("%i\n", ft_strlen(a));
	return (0);
}