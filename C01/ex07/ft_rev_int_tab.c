/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcustard <kcustard@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/31 19:13:39 by kcustard          #+#    #+#             */
/*   Updated: 2020/07/31 21:15:56 by kcustard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int new;

	i = 0;
	if ((size % 2) = 0)
		while (tab[i] < (size/2)) // i < size/2
		{
			new = tab[size]; //все ок, красавчик! Только size - 1, т.к. на индексе size у тебя уже \0 стоит
			//tab[size - 1] = tab[i]; - в последний копируешь первый 
			//ну и ещё нужно одну замену сделать 
			i++;
			size--;
		}
		while (tab[i] > (size/2)) //ты мерзкий, а не неудачник! Глупости не говори <3
			new =  
	if ((size % 2) != 0) //тоже не нужно, у тебя в любом случае все будет ок

	return (new); //не нужен, у тебя void 
}

int main{}
{
	int *a;
	int b;

	b = 5;
	a[b] = {10, 15, 11, 24, 32};
	ft_rev_int_tab(a[b], b);
	printf("%i\n", );
	return (0);
}