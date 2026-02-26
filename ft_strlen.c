/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 07:00:00 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/26 07:46:45 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the length of a string
 * @param {char*} str: pointer to the string
 * @return {unsigned long} The length of the string
 */
unsigned long ft_strlen(const char *str)
{
	unsigned long	i;
	const char		*str_copy;

	str_copy = str;
	i = 0;
	while(*str_copy++)
		i++;
	return (i);
}

/*int	main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Please only input one argument");
	ft_putstr("The length of your message is: ");
	ft_putnbr(ft_strlen(argv[1]));
	ft_putchar('\n');
	return (0);
}*/