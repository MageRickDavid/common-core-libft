/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 22:31:46 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/07 00:24:22 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Inserts nulls into the first n spaces pointed 
 * after the pointer to the memory.
 * @param {void*} s: Pointer to the memory.
 * @param {unsigned int} n: The amount of spaces in the memory
 * @return {void}
 */
void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*ptr = (unsigned char) 0;
		ptr++;
		i++;
	}
}

/*int	main(int arg, char **argv)
{
	int					size_of_memory;
	char				*ptr;
	unsigned int		i;
	int					len;
	
	if (arg != 3)
	{
		ft_putstr("Please input only two arguments");
		return (0);
	}
	ptr = argv[1];
	size_of_memory = ft_strlen(ptr);
	len = ft_atoi(argv[2]);
	if (len > size_of_memory)
	{
		ft_putstr("Please input a shorter size\n");
		return (0);
	}
	ft_bzero(ptr, (unsigned int) len);
	while (i < (unsigned int) size_of_memory)
	{
		if (ptr[i] == '\0')
		{
			ft_putstr("\\0");
			i++;
			continue;
		}
		ft_putchar(ptr[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}*/