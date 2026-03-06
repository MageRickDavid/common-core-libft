/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 23:38:30 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/07 00:19:59 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	unsigned int		i;

	i = 0;
	ptr_dest = dest;
	ptr_src = src;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/*int	main(int arg, char **argv)
{
	unsigned char	dest[100];
	unsigned int	i;
	
	i = 0;
	if (arg != 3)
	{
		ft_putstr("Please only input 2 arguments");
		return (0);	
	}
	ft_memcpy(dest, argv[1], (unsigned) ft_atoi(argv[2]));
	while (i < (unsigned) ft_atoi(argv[2]))
	{
		ft_putchar((char)(dest[i]));
		i++;
	}
	ft_putchar('\n');
	return (0);
}*/