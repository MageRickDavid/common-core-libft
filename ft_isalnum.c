/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 07:47:22 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/26 08:12:58 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks whether the input character is part of the alphabet
 * @param {int}: c input character
 * @return {int}: 1 if the character is in between [A - Z] or [a - z]
 */
int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/*int	main(int arg, char **argv)
{
	if (arg != 2)
	{
		ft_putstr("Input only one argument");
		return (1);
	}
	ft_putstr("The code of your input is: ");
	while (*argv[1])
	{
		ft_putnbr(ft_isalnum(*argv[1]));
		argv[1]++;
	}
	ft_putchar('\n');
	return (0);
}*/