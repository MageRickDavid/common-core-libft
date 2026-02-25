/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:02:49 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/26 01:34:22 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks whether the input character is a digit
 * @param {int}: c input character
 * @return {int}: 1 if the character is in between 0 and 9 inclusive.
 * 0 otherwise
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Please only input one argument");
	ft_putstr("The input is: ");
	ft_putnbr(ft_isdigit(*argv[1]));
	return (0);
}*/