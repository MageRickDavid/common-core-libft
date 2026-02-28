/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 06:22:40 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/01 06:30:01 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief If the character is a uppercase character it returns the lowercase
 * If it is not uppercase, it simply returns the same character
 * @param {int} c: The character to test.
 * @return {int} The upper case character or the same character.
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
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
	message = ft_tolower(*argv[1]);
	ft_putstr("Output: ");
	ft_putchar(message);
	ft_putchar('\n');
	return (0);
}*/