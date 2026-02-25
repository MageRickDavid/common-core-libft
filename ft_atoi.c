/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 22:41:59 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/26 01:36:13 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts a string representation of an integer
 * @param {char*} str: The string representation
 * @return {int} The integer to return
 */
int	ft_atoi(const char *str)
{
	const char		*copy_str;
	int				negative;
	int				result;

	copy_str = str;
	negative = 1;
	result = 0;
	while (*copy_str == ' ')
		copy_str++;
	while (*copy_str == '+' || *copy_str == '-')
	{
		if (*copy_str == '-')
			negative *= -1;
		copy_str++;
	}
	while (*copy_str >= '0' && *copy_str <= '9')
	{
		result = (result * 10) + *copy_str - '0';
		copy_str++;
	}
	return (result * negative);
}

/*int	main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Please only input 1 argument");
	ft_putstr("The input number was: ");
	ft_putnbr(ft_atoi(argv[1]));
	return (0);
}*/