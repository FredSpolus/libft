/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fforte-j <fforte-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:53:22 by fforte-j          #+#    #+#             */
/*   Updated: 2024/10/28 18:53:23 by fforte-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	converted;
	int	sign;

	i = 0;
	converted = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		converted = (converted * 10) + (str[i] - '0');
		i++;
	}
	return (converted * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "+101";
// 	printf("result : %d", ft_atoi(test));
// 	return (0);
// }
