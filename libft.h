/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rortiz <rortiz@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:24:00 by rortiz            #+#    #+#             */
/*   Updated: 2026/03/04 23:28:27 by rortiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void			*ft_memset(void *s, int c, int n);
void			ft_putstr(char *str);
void			ft_putnbr(int n);
void			ft_putchar(char c);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);
unsigned long	ft_strlen(const char *str);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, int n)

#endif