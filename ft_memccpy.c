/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 09:08:44 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/19 10:16:20 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_memccpy(void *dest, const void *src, int c, unsigned int n)
{
	unsigned int		i;
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_src = src;
	ptr_dest = dest;
	i = 0;
	while (i < n)
	{
		if (ptr_src[i] == c)
			break;
		i++;
	}
	if (i >= n)
		return ((void*)0);
	ptr_dest = ft_memcpy(dest, src, i++);
	return (&ptr_dest[i]);
}

int	main(int arg, char **argv)
{
	char	*dest_original;
	char	*dest_test;
	
	if (arg != 5)
	{
		ft_putstr("Please input 4 arguments\n");
		return (0);
	}
	dest_original = argv[1];
	dest_test = ft_memccpy(argv[1], argv[2], ft_atoi(argv[3]), (unsigned int)ft_atoi(argv[4]));
	ft_putstr("The message now says: \n");
	ft_putstr(dest_original);
	ft_putchar('\n');
	ft_putstr("and the pointer now prints the message: ");
	ft_putstr(dest_test);
	ft_putchar('\n');
	return (0);
}