/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 23:29:32 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/25 23:50:37 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/**
 * @brief Outputs the character c to the standard output
 * @param {char} c: The character to output
 * @return {void}
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Only input one argument");
	while (*argv[1])
	{
		ft_putchar(*argv[1]);
		argv[1]++;	
	}
	ft_putstr("\n");
	return (0);
}*/