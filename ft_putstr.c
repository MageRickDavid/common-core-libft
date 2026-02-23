/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:27:05 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/23 09:44:18 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Prints a string into the standard output
 * @param {char*}: str input string
 * @return {void}
 */
void	ft_putstr(char *str)
{
	char	*copy_str;

	copy_str = str;
	while (*copy_str)
		write(1, copy_str++, 1);
}

/*int	main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Please only input one argument");
	ft_putstr("Message received: ");
	ft_putstr(argv[1]);
	ft_putstr("\n");
	return (0);
}*/
