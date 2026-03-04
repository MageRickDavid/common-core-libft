/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 22:43:13 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/04 23:22:10 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n characters from src to dest.
 * @param {char*} dest: Pointer to the destination memory.
 * @param {const char*} src: Pointer to the source memory.
 * @param {int} n: The amount of bytes to copy.
 * @return {char*} Returns a pointer to the destination memory
 */
char	*ft_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;	
	}
	if (i < n)
		dest[i] = '\0';
	return (dest);
}

int	main(int arg, char **argv)
{
	char	destination[100];
	
	if (arg != 3)
	{
		ft_putstr("Please only input two argument");
		return (0);
	}
	ft_strncpy(destination, argv[1], ft_atoi(argv[2]));
	ft_putstr("The input was: ");
	ft_putstr(destination);
	ft_putchar('\n');
	return (0);
}