/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:53:57 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:53:58 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	count_decimals(int n, int *count)
{
	while (n > 9)
	{
		*count = *count + 1;
		n = n / 10;
	}
}

static void	treat_negative_input(int *n, int *signal, int *count)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*signal = -1;
		*count = *count + 1;
	}
	else
	{
		*signal = 1;
	}
}

static char	*treat_int_min(char *int_min)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * 12);
	if (!str)
		return (NULL);
	while (*int_min)
	{
		str[i] = *int_min;
		i++;
		int_min++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i_count;
	int		signal;

	i_count = 1;
	if (n == -2147483648)
		return (treat_int_min("-2147483648"));
	treat_negative_input(&n, &signal, &i_count);
	count_decimals(n, &i_count);
	str = (char *)malloc(sizeof(char) * (i_count + 1));
	if (!str)
		return (NULL);
	str[i_count] = '\0';
	while (--i_count >= 0)
	{
		if (signal == -1 && i_count == 0)
			str[i_count] = '-';
		else
		{
			str[i_count] = (n % 10) + '0';
			n = n / 10;
		}
	}
	return (str);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(2010));
// 	printf("result : %s\n", ft_itoa(2010));
// 	printf("len : %zu\n", strlen(ft_itoa(2010)));
// 	printf("len direct : %zu\n", strlen("2010"));

// 	printf("\n");

// 	printf("resutl : %s\n", ft_itoa(-623));
// 	printf("len : %zu\n", strlen(ft_itoa(-623)));
// 	printf("len direct : %zu\n", strlen("-623"));

// 	printf("\n");

// 	printf("resutll : %s\n", ft_itoa(1));
// 	printf("len : %zu\n", strlen(ft_itoa(1)));
// 	printf("len direct : %zu\n", strlen("1"));

// 	printf("\n");

// 	printf("resutll :%s\n", ft_itoa(-0));
// 	printf("len : %zu\n", strlen(ft_itoa(-0)));
// 	printf("len direct : %zu\n", strlen("0"));

// 	printf("\n");

// 	printf("resutll :%s\n", ft_itoa(-5859));
// 	printf("len : %zu\n", strlen(ft_itoa(-5859)));
// 	printf("len direct : %zu\n", strlen("-5859"));

// 	printf("\n");

// 	printf("resutll :%s\n", ft_itoa(-156));
// 	printf("len : %zu\n", strlen(ft_itoa(-156)));
// 	printf("len direct : %zu\n\n", strlen("-156"));

// 	char *i2 = ft_itoa(-10004);
// 	printf("result i2: %s\n", i2);
// 	printf("len i2 : %lu\n", strlen(i2));
// 	printf("comp : %d\n", strcmp(i2 , "-10004"));
// 	return (0);
// }
