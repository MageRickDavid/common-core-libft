/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 23:06:29 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/26 01:35:27 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs de integer n to the standard output
 * @param {int} n: The integer to output
 * @return {void}
 */
void	ft_putnbr(int n)
{
	int		residue;
	char	message;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		ft_putchar('\n');
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	residue = n % 10;
	message = residue + '0';
	if (residue == n)
	{
		ft_putchar(message);
		return ;
	}
	ft_putnbr(n / 10);
	ft_putchar(message);
}

/*int	main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Only input one argument");
	ft_putstr("Input number: ");
	ft_putnbr(ft_atoi(argv[1]));
	ft_putchar('\n');
	return (0);
}*/