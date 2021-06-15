/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:54:45 by kcustard          #+#    #+#             */
/*   Updated: 2020/09/27 10:52:48 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int e;

	i = 0;
	e = 0;
	while (dest[i] != '\0')
		i++;
	while (src[e] != '\0')
	{
		dest[i + e] = src[e];
		e++;
	}
	dest[i + e] = '\0';
	return (dest);
}

int main()
{
	char a[] = "lol";
	char b[] = "a";
	printf("%s\n", ft_strcat(a, b));
	return (0);
}
