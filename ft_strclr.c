/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 10:01:17 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/19 09:02:14 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets every character of the string to the value '\0'.
 * @param {char*} s: Pointer to the string.
 * @return {void}
 */
void	ft_strclr(char *s)
{
	char	*s_copy;
	
	s_copy = s;
	while (*s_copy)
	{
		*s_copy = 0;
		s_copy++;
	}
}

/*int	main(int arg, char **argv)
{
	int	len;
	int	i;
	
	if (arg != 2)
	{
		ft_putstr("Please only put one argument\n");
		return (0);
	}
	len = ft_strlen(argv[1]);
	i = 0;
	while (i < len)
	{
		ft_putstr("\\0");
		i++;
	}
	ft_putchar('\n');
	return (0);
}*/