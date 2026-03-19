/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 08:49:52 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/19 09:04:34 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings and returns the result of the comparison
 * @param {const char*} s1: First string in comparison
 * @param {const char*} s2: Second string in comparison
 * @return {int} Result of the comparison 
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*s11;
	unsigned char	*s22;
	int				i;

	i = 0;
	s11 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;
	while (s11[i] && s11[i] == s22[i])
		i++;
	return (s11[i] - s22[i]);
}

/*int	main(int arg, char **argv)
{
	if (arg != 3)
	{
		ft_putstr("Please put only 2 arguments");
		return (0);
	}
	ft_putstr("The comparison of ");
	ft_putstr(argv[1]);
	ft_putstr(" and ");
	ft_putstr(argv[2]);
	ft_putstr(" is: ");
	ft_putnbr(ft_strcmp(argv[1], argv[2]));
	ft_putchar('\n');
	return (0);
}*/