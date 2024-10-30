/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:55:01 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/30 17:40:15 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// iterate the function f on each character of the provided string s.
void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	test_func(unsigned int i, char *c)
// {
// 	*c = *c + i;
// }

// #include <stdio.h>
// int	main(void)
// {
// 	char test[] = "aaaa";
// 	ft_striteri(test, &test_func);
// 	printf("%s", test);
// 	return (0);
// }
