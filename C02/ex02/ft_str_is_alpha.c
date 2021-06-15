/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/02 11:34:41 by kcustard          #+#    #+#             */
/*   Updated: 2020/08/02 12:45:51 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	unsigned int i;

	i = 0;
	while (((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) && \
		str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

int main()
{
	char a[] = "Hihi";
	printf("%i\n", ft_str_is_alpha(a));
	return (0);
}