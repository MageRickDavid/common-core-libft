/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 04:49:09 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/04 23:16:07 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills  the  first  n  bytes of the memory area pointed to by s 
 * with the constant byte c.
 * @param {void*}: s Pointer to the memory space.
 * @param {int}: c The constant to insert.
 * @param {int}: n The number of bytes of memory where to insert the constant c.
 * @return {void*}: Pointer to the memory.
 */
void	*ft_memset(void *s, int c, int n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*int	main(int arg, char **argv)
{
	char	*ptr;
	
	if (arg != 2)
	{
		ft_putstr("Please only input one argument");
		return (0);
	}
	ptr = ft_memset(argv[1], '+', 5);
	ft_putstr("Input changed: ");
	ft_putstr(ptr);
	ft_putchar('\n');
	return (0);
}*/