/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 09:18:13 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/13 09:55:45 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*s11;
	unsigned char	*s22;
	unsigned int	i;

	i = 0;
	s11 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;
	while (s11[i] && s11[i] == s22[i] && i < (n - 1))
		i++;
	return (s11[i] - s22[i]);
}

/*int	main(int arg, char **argv)
{
	if (arg != 4)
	{
		ft_putstr("Please put only 3 arguments");
		return (0);
	}
	ft_putstr("The comparison of ");
	ft_putstr(argv[1]);
	ft_putstr(" and ");
	ft_putstr(argv[2]);
	ft_putstr(" is: ");
	ft_putnbr(ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
	ft_putchar('\n');
	return (0);
}*/