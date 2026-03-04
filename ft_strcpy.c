/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 09:05:32 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/04 23:20:15 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies a string from src to dest
 * @param {char*} dest: Pointer to the destination memory
 * @param {const char*} src: Pointer to the source memory
 * @return {char*} Returns a pointer to the destination memory
 */
char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;	
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(int arg, char **argv)
{
	char	destination[100] = "";
	
	if (arg != 2)
	{
		ft_putstr("Please only input one argument");
		return (0);
	}
	ft_strcpy(destination, argv[1]);
	ft_putstr("The input was: ");
	ft_putstr(destination);
	ft_putchar('\n');
	return (0);
}*/

