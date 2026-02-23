/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:12:18 by rortiz            #+#    #+#             */
/*   Updated: 2026/02/23 09:37:24 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks whether the input character is part of the alphabet
 * @param {int}: c input character
 * @return {int}: 1 if the character is in between [A - Z] or [a - z]
 */
int	ft_islapha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int main(int arg, char **argv)
{
	if (arg != 2)
		ft_putstr("Please only input one argument");
	ft_putstr("Message received: ");
	ft_putstr(argv[1]);
	ft_putstr("\n");
	return (0);
}