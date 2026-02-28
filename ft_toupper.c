/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 06:05:07 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/01 06:29:55 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief If the character is a lowercase character it returns the uppercase
 * If it is not lowercase, it simply returns the same character
 * @param {int} c: The character to test.
 * @return {int} The upper case character or the same character.
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int	main(int arg, char **argv)
{
	char	message;
	if (arg != 2)
	{
		ft_putstr("Please only input one argument");
		ft_putchar('\n');
		return (0);
	}
	message = ft_toupper(*argv[1]);
	ft_putstr("Output: ");
	ft_putchar(message);
	ft_putchar('\n');
	return (0);
}*/